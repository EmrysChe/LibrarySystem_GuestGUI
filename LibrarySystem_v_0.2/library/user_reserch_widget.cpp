#include "user_reserch_widget.h"
#include "ui_user_reserch_widget.h"

user_reserch_widget::user_reserch_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::user_reserch_widget)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    user_model = new QSqlTableModel;
    user_model->setTable("user");
    user_model->select();
    ui->tableView_2->setModel(user_model);
    ui->tableView_2->verticalHeader()->hide();
    ui->tableView_2->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    re_model = new QSqlTableModel(this);
    re_model -> setTable("book");
    re_model->select();
    ui->tableView->setModel(re_model);
    ui->tableView->verticalHeader()->hide();
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
}

user_reserch_widget::~user_reserch_widget()
{
    delete ui;
}

void user_reserch_widget::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()&Qt::LeftButton)
    {
        move(e->globalPos()-p1);
    }
}

void user_reserch_widget::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
    {
        p1 = e->globalPos()-frameGeometry().topLeft();
    }
}

void user_reserch_widget::on_find_pushButton_clicked()
{
    if(ui->id_radioButton->isChecked())
    {
        if(ui->input_lineEdit->text().isEmpty())
        {
            re_model->setFilter("");
        }
        else
        {
            re_model->setFilter("id = "+ui->input_lineEdit->text());
        }
    }
    if(ui->name_radioButton->isChecked())
    {
        if(ui->input_lineEdit->text().isEmpty())
        {
            re_model->setFilter("");
        }
        else
        {
            QString tempSql = "'" + ui->input_lineEdit->text() + "'";
            re_model->setFilter("name = "+tempSql);
        }
    }
    if(ui->author_radioButton->isChecked())
    {
        if(ui->input_lineEdit->text().isEmpty())
        {
            re_model->setFilter("");
        }
        else
        {
            QString tempSql = "'" + ui->input_lineEdit->text() + "'";
            re_model->setFilter("author = "+tempSql);
        }
    }
    re_model->select();
    ui->tableView->setModel(re_model);
}

void user_reserch_widget::on_borrow_pushButton_clicked()
{
    int flag = 0;
    if(ui->id_lineEdit->text().isEmpty())
    {
        QMessageBox::warning(this,NULL,"请输入完整书名或ID");
    }
    else
    {
        QSqlQuery bor_query;
        QSqlQuery query2;
        QString select_all_sql = "select id,total,left from book";
        buf = ui->lineEdit->text();
        bor_query.prepare(select_all_sql);
        if(!bor_query.exec())
        {
            qDebug()<<bor_query.lastError();
        }
        else
        {
            query2.exec("SELECT * FROM user WHERE account = " + buf);
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
            if(userbuf.account == NULL)
            {
                QMessageBox::warning(this,NULL,"no such account !");
            }
            else
            {
                if(userbuf.book1_id == ui->id_lineEdit->text())
                {
                    query2.exec("UPDATE user SET book1_name = NULL WHERE account = " + userbuf.account);
                    query2.exec("UPDATE user SET book1_id = NULL WHERE account = " + userbuf.account);
                    query2.exec("UPDATE user SET book1_returnDate = NULL WHERE account = " + userbuf.account);
                    query2.exec("UPDATE user SET book1_borrowDate = NULL WHERE account = " + userbuf.account);

                    while(bor_query.next())
                    {
                        int id = bor_query.value("id").toInt();
                        int num = bor_query.value("total").toInt();
                        int allow = bor_query.value("left").toInt();
                        qDebug()<<QString("ID:%1  num:%2 allow:%3").arg(id).arg(num).arg(allow);
                        if(ui->id_lineEdit->text().toInt() == id )//请判断用户并删除结束记录AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
                        {
                            qDebug()<<"keyi jie";
                            allow = allow + 1;
                            bor_query.prepare("update book set left = :left where id = :id");
                            bor_query.bindValue(":left",allow);
                            bor_query.bindValue(":id",id);
                            bool ni= bor_query.exec();
                            if(!ni)
                            {
                                QSqlError lastError=bor_query.lastError ();
                                qDebug()<<lastError.driverText ()<<QString(QObject::tr ("还书失败"));
                                qDebug()<<"cuole";
                                QMessageBox::warning(this,NULL,"还书失败，请重新输入");
                                return;
                            }
                            else
                            {
                                qDebug()<<QObject::tr ("还书成功");
                                QMessageBox::information(this,NULL,tr("return book success!"));
                                flag = 1;
                                re_model->select();
                                ui->tableView->setModel(re_model);
                                user_model->select();
                                ui->tableView_2->setModel(user_model);
                                return;
                            }

                        }
                        else
                        {
                            continue;
                        }
                    }
                    if(flag == 0)
                    {
                        QMessageBox::warning(this,NULL,"没有找到这本书");
                    }
                }
                else if(userbuf.book2_id == ui->id_lineEdit->text())
                {
                    query2.exec("UPDATE user SET book2_name = NULL WHERE account = " + userbuf.account);
                    query2.exec("UPDATE user SET book2_id = NULL WHERE account = " + userbuf.account);
                    query2.exec("UPDATE user SET book2_returnDate = NULL WHERE account = " + userbuf.account);
                    query2.exec("UPDATE user SET book2_borrowDate = NULL WHERE account = " + userbuf.account);

                    while(bor_query.next())
                    {
                        int id = bor_query.value("id").toInt();
                        int num = bor_query.value("total").toInt();
                        int allow = bor_query.value("left").toInt();
                        qDebug()<<QString("ID:%1  num:%2 allow:%3").arg(id).arg(num).arg(allow);
                        if(ui->id_lineEdit->text().toInt() == id )//请判断用户并删除结束记录AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
                        {
                            qDebug()<<"keyi jie";
                            allow = allow + 1;
                            bor_query.prepare("update book set left = :left where id = :id");
                            bor_query.bindValue(":left",allow);
                            bor_query.bindValue(":id",id);
                            bool ni= bor_query.exec();
                            if(!ni)
                            {
                                QSqlError lastError=bor_query.lastError ();
                                qDebug()<<lastError.driverText ()<<QString(QObject::tr ("还书失败"));
                                qDebug()<<"cuole";
                                QMessageBox::warning(this,NULL,"还书失败，请重新输入");
                                return;
                            }
                            else
                            {
                                qDebug()<<QObject::tr ("还书成功");
                                QMessageBox::information(this,NULL,tr("return book success!"));
                                flag = 1;
                                re_model->select();
                                ui->tableView->setModel(re_model);
                                user_model->select();
                                ui->tableView_2->setModel(user_model);
                                return;
                            }

                        }
                        else
                        {
                            continue;
                        }
                    }
                    if(flag == 0)
                    {
                        QMessageBox::warning(this,NULL,"没有找到这本书");
                    }
                }
                else
                {
                    QMessageBox::warning(this,NULL,"this user did not borrow this book !");
                }
            }
        }
    }
}

void user_reserch_widget::on_add_pushButton_clicked()
{
    int rows = ui->tableView->currentIndex().row();
    re_model->insertRow(rows+1);
}

void user_reserch_widget::on_del_pushButton_clicked()
{
    int rows = ui->tableView->currentIndex().row();
    int choose = QMessageBox::warning(this,"Removing","Real Deleta?",0x00004000,0x00010000);
    if(choose == 0x00004000)
    {
        re_model->removeRow(rows);
    }

}


void user_reserch_widget::on_connect_pushButton_clicked()
{
    if(!isConnected)
    {

        QString hostAddrStr = "127.0.0.1";
        quint16 hostPort = 8080;

        socket = new QTcpSocket();//负责连接动作
        connect(socket,SIGNAL(connected()),this,SLOT(slotConnected()));//先声明槽函数，等连接上之后调用
        connect(socket,SIGNAL(disconnected()),this,SLOT(slotDisConnected()));
        //创建运输车socket，跟server进行连接，负责接受或处理客户数据
        connect(socket,SIGNAL(readyRead()),this,SLOT(slotReadDate()));
        connect(socket,SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(slotError(QAbstractSocket::SocketError)));
        connect(socket,SIGNAL(stateChanged(QAbstractSocket::SocketState)),this,SLOT(slotStateChanged(QAbstractSocket:: SocketState)));
        connect(socket,SIGNAL(readyRead()),this,SLOT(slotReadDate()));
        socket->connectToHost(QHostAddress(hostAddrStr),hostPort);//连接到主机，就会发送connected信号
        socket->waitForConnected(200);
    }
    else if(isConnected)
    {
        socket->disconnectFromHost();
    }
}

void user_reserch_widget::on_send_pushButton_clicked()
{
    if(!ui->send_lineEdit->text().isEmpty())
    {
        QTextStream out(socket);
        out<<"管理员："+ui->send_lineEdit->text();

    }
}

void user_reserch_widget::slotDisConnected()
{
    qDebug()<<"Client disconnect Host success";
    socket->disconnect();
    ui->send_lineEdit->setDisabled(true);
    ui->send_pushButton->setDisabled(true);
    ui->connect_pushButton->setText("Connect");
    isConnected = false;
}

void user_reserch_widget::slotConnected()
{
    qDebug()<<"Client connect Host success";
    ui->send_lineEdit->setDisabled(false);
    ui->send_pushButton->setDisabled(false);
    isConnected = true;
    ui->connect_pushButton->setText("Disconnect");
}

void user_reserch_widget::slotReadDate()
{
    QByteArray ba = socket->readAll();//获取其值
    ui->listWidget->addItem(ba);
}

void user_reserch_widget::slotError(QAbstractSocket::SocketError socketError)
{
        qDebug()<<socketError;
}
void user_reserch_widget::slotStateChanged(QAbstractSocket::SocketState socketChanged)
{
        qDebug()<<socketChanged;
}

void user_reserch_widget::on_freshButton_clicked()
{
    user_model->select();
    ui->tableView_2->setModel(user_model);
    re_model->select();
    ui->tableView->setModel(re_model);
}
