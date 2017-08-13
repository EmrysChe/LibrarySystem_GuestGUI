#include "guestguiwidget.h"
#include "ui_guestguiwidget.h"

GuestGUIWidget::GuestGUIWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GuestGUIWidget)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    userModel = new QSqlTableModel(this);
    userModel->setTable("user");
    userModel->select();
    ui->userInformationTableView->setModel(userModel);
    ui->userInformationTableView->verticalHeader()->hide();
    ui->userInformationTableView->setColumnHidden(1,true);
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
    QSqlQuery query("SELECT left FROM book WHERE name = " + a);
    query.first();
    if(query.value(0).toInt() > 0)
    {
        query.exec("UPDATE book SET left = left - 1 WHERE name = " + a);
        bookModel->select();
        ui->bookInformationTableView->setModel(bookModel);
        userModel->select();
        ui->userInformationTableView->setModel(userModel);
    }
    else
    {
        QMessageBox::warning(this,NULL,tr("the amount of book is empty!"));
    }
}
