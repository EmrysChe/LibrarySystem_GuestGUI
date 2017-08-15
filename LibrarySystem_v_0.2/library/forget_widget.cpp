#include "forget_widget.h"
#include "ui_forget_widget.h"

forget_widget::forget_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::forget_widget)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}

forget_widget::~forget_widget()
{
    delete ui;
}

void forget_widget::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()&Qt::LeftButton)
    {
        move(e->globalPos()-p1);
    }
}

void forget_widget::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
    {
        p1 = e->globalPos()-frameGeometry().topLeft();
    }
}

void forget_widget::on_confirm_pushButton_clicked()
{
    if(ui->acc_lineEdit->text().isEmpty()|| ui->email_lineEdit->text().isEmpty() ||ui->pass_lineEdit->text().isEmpty() || ui->pass2_lineEdit->text().isEmpty())
    {
        QMessageBox::warning(this,NULL,"数据都不能为空，请重新输入");
    }
    else
    {
        if(ui->pass2_lineEdit->text() == ui->pass_lineEdit->text())
        {
            qDebug()<<"输入正确";
            model_for = new QSqlTableModel(this);
            model_for -> setTable("user");
            QSqlQuery query;
            QString select_all_sql = "select * from user";
            query.prepare(select_all_sql);
            if(!query.exec())
            {
                qDebug()<<query.lastError();
            }
            //int flag = 0;
            int acc   =ui->acc_lineEdit->text().toInt();
            int pass  =ui->pass_lineEdit->text().toInt();
            QString email  =ui->email_lineEdit->text();
            while(query.next())
            {
                if(acc == query.value("account").toInt() && email == query.value("email").toString())
                {
                       query.prepare("update user set password = :password where account = :account");
                       query.bindValue(":password",pass);
                       query.bindValue(":account",acc);
                       bool ni= query.exec();
                       if(!ni)
                       {
                           QSqlError lastError=query.lastError ();
                           qDebug()<<lastError.driverText ()<<QString(QObject::tr ("更新失败\n"));
                           qDebug()<<"cuole";
                           QMessageBox::warning(this,NULL,"找回失败，请重新输入");
                       }
                       else
                       {
                           qDebug()<<QObject::tr ("跟新成功\n");
                           close();
                       }
                    return;
                }
                else
                {
                    qDebug()<<"NO";
                    continue;
                }
            }
         QMessageBox::warning(this,NULL,"找回失败，请重新输入");
        }

        else
        {
            QMessageBox::warning(this,NULL,"密码不相同！");
        }
    }
}

