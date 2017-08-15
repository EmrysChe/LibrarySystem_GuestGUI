#include "guestguiwidget.h"
#include "ui_guestguiwidget.h"

GuestGUIWidget::GuestGUIWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GuestGUIWidget)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    current_date_time = QDateTime::currentDateTime();
    current_date = current_date_time.toString("yyyy-MM-dd");

    bookModel = new QSqlTableModel(this);
    bookModel->setTable("book");
    bookModel->select();
    ui->bookInformationTableView->setModel(bookModel);
    ui->bookInformationTableView->verticalHeader()->hide();
}

GuestGUIWidget::~GuestGUIWidget()
{
    delete ui;
}

void GuestGUIWidget::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons() & Qt::LeftButton)
    {
        move(e->globalPos() - p1);
    }
}

void GuestGUIWidget::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
    {
        p1 = e->globalPos() - frameGeometry().topLeft();
    }
}

void GuestGUIWidget::on_exitButton_clicked()
{
    this->close();
}

void GuestGUIWidget::on_searchingButton_clicked()
{
    if(ui->searchBookLineEdit->text().isEmpty())
    {
        bookModel->setFilter("");
    }
    else
    {
        QString a = "'" + ui->searchBookLineEdit->text() + "'";
        bookModel->setFilter("name=" + a);
    }
    bookModel->select();
    ui->bookInformationTableView->setModel(bookModel);
}

void GuestGUIWidget::on_borrowButton_clicked()
{
    QString a = "'" + ui->searchBookLineEdit->text() + "'";
    QSqlQuery query("SELECT * FROM book WHERE name = " + a);
    //QSqlQuery query2;
    query.first();
    if(ui->searchBookLineEdit->text().isEmpty())
    {
        QMessageBox::warning(this,NULL,tr("please input book name !"));
    }
    else
    {
        if(query.value(1).toString() == NULL)
        {
            QMessageBox::warning(this,NULL,tr("book dosen't exsit!"));
        }
        else
        {
            if(query.value(4).toInt() > 0)
            {
                bookdatabuf.name = query.value(1).toString();
                bookdatabuf.id = query.value(0).toString();
                bookdatabuf.author = query.value(2).toString();
                bookdatabuf.totle = query.value(3).toInt();
                bookdatabuf.left = query.value(4).toInt();
                //qDebug() << bookdatabuf.name << bookdatabuf.id << bookdatabuf.author << bookdatabuf.totle << bookdatabuf.left;

                query.exec("UPDATE book SET left = left - 1 WHERE name = " + a);

                query.exec("SELECT * FROM user WHERE account = " + get_account);

                query.first();
                userbuf.account = query.value(0).toString();
                userbuf.password = query.value(1).toString();
                userbuf.email = query.value(2).toString();
                userbuf.book1_id = query.value(3).toString();
                userbuf.book1_name = query.value(4).toString();
                userbuf.book1_borrowDate = query.value(5).toString();
                userbuf.book1_returnDate = query.value(6).toString();
                userbuf.book2_id = query.value(7).toString();
                userbuf.book2_name = query.value(8).toString();
                userbuf.book2_borrowDate = query.value(9).toString();
                userbuf.book2_returnDate = query.value(10).toString();
                //qDebug() << userbuf.book1_name;

                if(userbuf.book1_name == NULL)
                {
                    //qDebug() << bookdatabuf.id;
                    query.exec("UPDATE user SET book1_id = " + bookdatabuf.id + " WHERE account = " + get_account);
                    buf = "'" + bookdatabuf.name + "'";
                    query.exec("UPDATE user SET book1_name = " + buf +" WHERE account = " + get_account);
                    //qDebug() << buf;
                    query.exec("UPDATE user SET book1_borrowDate = date('now') WHERE account = " + get_account);
                    query.exec("UPDATE user SET book1_returnDate = date('now','+60 day') WHERE account = " + get_account);
                    QMessageBox::information(this,NULL,tr("thank you for borrow book, please return it on time."));
                }
                else if(userbuf.book2_name == NULL)
                {
                    //qDebug() << bookdatabuf.id;
                    query.exec("UPDATE user SET book2_id = " + bookdatabuf.id + " WHERE account = " + get_account);
                    buf = "'" + bookdatabuf.name + "'";
                    query.exec("UPDATE user SET book2_name = " + buf +" WHERE account = " + get_account);
                    //qDebug() << buf;
                    query.exec("UPDATE user SET book2_borrowDate = date('now') WHERE account = " + get_account);
                    query.exec("UPDATE user SET book2_returnDate = date('now','+60 day') WHERE account = " + get_account);
                    QMessageBox::information(this,NULL,tr("thank you for borrow book, please return it on time."));
                }
                else
                {
                    QMessageBox::warning(this,NULL,tr("you have two books didn't return !"));
                    query.exec("UPDATE book SET left = left + 1 WHERE name = " + a);
                }

                bookModel->select();
                ui->bookInformationTableView->setModel(bookModel);
                userModel->select();
                ui->userInformationTableView->setModel(userModel);
                userbook1Model->select();
                ui->book1TableView->setModel(userbook1Model);
                userbook2Model->select();
                ui->book2TableView->setModel(userbook2Model);
            }
            else
            {
                QMessageBox::warning(this,NULL,tr("the amount of book is empty !"));
            }
        }
    }
}

void GuestGUIWidget::on_returnButton_clicked()
{
    QString a = "'" + ui->searchBookLineEdit->text() + "'";
    QSqlQuery query("SELECT * FROM book WHERE name = " + a);
    QSqlQuery query2;
    query.first();
    if(ui->searchBookLineEdit->text().isEmpty())
    {
        QMessageBox::warning(this,NULL,tr("please input book name !"));
    }
    else
    {
        if(query.value(0).toString() == NULL)
        {
            QMessageBox::warning(this,NULL,tr("book dosen't exsit!"));
        }
        else
        {
            query.exec("UPDATE book SET left = left + 1 WHERE name = " + a);

            query2.exec("SELECT * FROM book WHERE name = " + a);
            query2.first();
            bookdatabuf.name = query2.value(1).toString();
            bookdatabuf.id = query2.value(0).toString();
            bookdatabuf.author = query2.value(2).toString();
            bookdatabuf.totle = query2.value(3).toInt();
            bookdatabuf.left = query2.value(4).toInt();
            //qDebug() << bookdatabuf.name;

            query2.exec("SELECT * FROM user WHERE account = " + get_account);

            query2.first();
            userbuf.account = query2.value(0).toString();
            userbuf.password = query2.value(1).toString();
            userbuf.email = query2.value(2).toString();
            userbuf.book1_id = query2.value(3).toString();
            userbuf.book1_name = query2.value(4).toString();
            userbuf.book1_borrowDate = query2.value(5).toString();
            userbuf.book1_returnDate = query2.value(6).toString();
            userbuf.book2_id = query2.value(7).toString();
            userbuf.book2_name = query2.value(8).toString();
            userbuf.book2_borrowDate = query2.value(9).toString();
            userbuf.book2_returnDate = query2.value(10).toString();
            //qDebug() << userbuf.account;

            if(userbuf.book1_name == ui->searchBookLineEdit->text())
            {
                query.exec("UPDATE user SET book1_name = NULL WHERE account = " + get_account);
                query.exec("UPDATE user SET book1_id = NULL WHERE account = " + get_account);
                query.exec("UPDATE user SET book1_returnDate = NULL WHERE account = " + get_account);
                query.exec("UPDATE user SET book1_borrowDate = NULL WHERE account = " + get_account);
                QMessageBox::information(this,NULL,tr("thank you for return book !"));
            }
            else if(userbuf.book2_name == ui->searchBookLineEdit->text())
            {
                query.exec("UPDATE user SET book2_name = NULL WHERE account = " + get_account);
                query.exec("UPDATE user SET book2_id = NULL WHERE account = " + get_account);
                query.exec("UPDATE user SET book2_returnDate = NULL WHERE account = " + get_account);
                query.exec("UPDATE user SET book2_borrowDate = NULL WHERE account = " + get_account);
                QMessageBox::information(this,NULL,tr("thank you for return book !"));
            }
            else
            {
                QMessageBox::warning(this,NULL,tr("you didn't borrow this book!"));
                query.exec("UPDATE book SET left = left - 1 WHERE name = " + a);
            }

            bookModel->select();
            ui->bookInformationTableView->setModel(bookModel);
            userModel->select();
            ui->userInformationTableView->setModel(userModel);
            userbook1Model->select();
            ui->book1TableView->setModel(userbook1Model);
            userbook2Model->select();
            ui->book2TableView->setModel(userbook2Model);
        }
    }
}

void GuestGUIWidget::on_logOffButton_clicked()
{
    cp = new library_user_Widget;
    cp->show();
    close();
}

void GuestGUIWidget::receiveData(int data)
{
    get_account = QString::number(data,10);
    //qDebug() << data;
    //qDebug() << get_account;
    qDebug() << "send";
}

void GuestGUIWidget::on_pushButton_clicked()
{
    //qDebug() << get_account;
    userModel = new QSqlTableModel(this);
    userModel->setTable("user");
    userModel->setFilter("account="+get_account);
    userModel->select();
    ui->userInformationTableView->setModel(userModel);
    ui->userInformationTableView->verticalHeader()->hide();
    ui->userInformationTableView->setColumnHidden(1,true);
    ui->userInformationTableView->setColumnHidden(3,true);
    ui->userInformationTableView->setColumnHidden(4,true);
    ui->userInformationTableView->setColumnHidden(5,true);
    ui->userInformationTableView->setColumnHidden(6,true);
    ui->userInformationTableView->setColumnHidden(7,true);
    ui->userInformationTableView->setColumnHidden(8,true);
    ui->userInformationTableView->setColumnHidden(9,true);
    ui->userInformationTableView->setColumnHidden(10,true);
    ui->userInformationTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    userbook1Model = new QSqlTableModel(this);
    userbook1Model->setTable("user");
    userbook1Model->setFilter("account="+get_account);
    userbook1Model->select();
    ui->book1TableView->setModel(userbook1Model);
    ui->book1TableView->verticalHeader()->hide();
    ui->book1TableView->setColumnHidden(0,true);
    ui->book1TableView->setColumnHidden(1,true);
    ui->book1TableView->setColumnHidden(2,true);
    ui->book1TableView->setColumnHidden(7,true);
    ui->book1TableView->setColumnHidden(8,true);
    ui->book1TableView->setColumnHidden(9,true);
    ui->book1TableView->setColumnHidden(10,true);
    ui->book1TableView->setColumnWidth(5,150);
    ui->book1TableView->setColumnWidth(6,150);

    userbook2Model = new QSqlTableModel(this);
    userbook2Model->setTable("user");
    userbook2Model->setFilter("account="+get_account);
    userbook2Model->select();
    ui->book2TableView->setModel(userbook1Model);
    ui->book2TableView->verticalHeader()->hide();
    ui->book2TableView->setColumnHidden(0,true);
    ui->book2TableView->setColumnHidden(1,true);
    ui->book2TableView->setColumnHidden(2,true);
    ui->book2TableView->setColumnHidden(3,true);
    ui->book2TableView->setColumnHidden(4,true);
    ui->book2TableView->setColumnHidden(5,true);
    ui->book2TableView->setColumnHidden(6,true);
    ui->book2TableView->setColumnWidth(9,150);
    ui->book2TableView->setColumnWidth(10,150);
}
