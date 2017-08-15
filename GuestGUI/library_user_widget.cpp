#include "library_user_widget.h"
#include "ui_library_user_widget.h"

library_user_Widget::library_user_Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::library_user_Widget)
{
    ui->setupUi(this);

}

library_user_Widget::~library_user_Widget()
{
    delete ui;
}

void library_user_Widget::on_login_pushButton_clicked()
{
    if(ui->radioButton->isChecked())
    {
        if(ui->acc_num_lineEdit->text().isEmpty() ||ui->password_lineEdit->text().isEmpty())
        {
           QMessageBox::warning(this,NULL,"账号或密码输入为空！");
        }
        else
        {
            model = new QSqlTableModel(this);
            model -> setTable("rooter");
            QSqlQuery query;
            QString select_all_sql = "select * from rooter";
            query.first();
           query.prepare(select_all_sql);
            if(!query.exec())
            {
                qDebug()<<query.lastError();
            }
            else
            {
                while(query.next())
                {
                    int acc = query.value(0).toInt();
                    int pass = query.value(1).toInt();
                    //qDebug()<<QString("ID:%1  Name:%2").arg(acc).arg(pass);
                    if(ui->acc_num_lineEdit->text().toInt() == acc && ui->password_lineEdit->text().toInt() == pass)
                    {
                        qDebug()<<"rooter ok";
                        up = new user_reserch_widget;
                        up->show();
                        close();
                        return ;

                    }
                    else
                        continue;
                }
            }

        }

    }
    if(ui->radioButton_2->isChecked())
    {
        if(ui->acc_num_lineEdit->text().isEmpty() ||ui->password_lineEdit->text().isEmpty())
        {
           QMessageBox::warning(this,NULL,"账号或密码输入为空！");
        }
        else
        {
            model = new QSqlTableModel(this);
            model -> setTable("user");
            QSqlQuery query;
            QString select_all_sql = "select account,password from user";
            query.first();
            query.prepare(select_all_sql);
            if(!query.exec())
            {
                qDebug()<<query.lastError();
            }
            else
            {
                while(query.next())
                {
                    int acc = query.value(0).toInt();
                    int pass = query.value(1).toInt();
                    //qDebug()<<QString("ID:%1  Name:%2").arg(acc).arg(pass);
                    if(ui->acc_num_lineEdit->text().toInt() == acc && ui->password_lineEdit->text().toInt() == pass)
                    {
                        qDebug()<<"user ok";

                        return;
                    }
                    else
                    {
                        continue;
                    }
                }
                QMessageBox::warning(this,NULL,"账号密码错误！");
            }

        }

    }
}

void library_user_Widget::on_register_pushButton_clicked()
{
    rp = new register_widget;
    rp->show();
}

void library_user_Widget::on_forget_pushButton_clicked()
{
    fp = new forget_widget;
    fp->show();
}


void library_user_Widget::on_pushButton_clicked()
{
    tp = new tcpClient_widget;
    tp->show();
}
