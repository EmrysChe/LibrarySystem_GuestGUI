#include "register_widget.h"
#include "ui_register_widget.h"

register_widget::register_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::register_widget)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}

register_widget::~register_widget()
{
    delete ui;
}

void register_widget::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()&Qt::LeftButton)
    {
        move(e->globalPos()-p1);
    }
}

void register_widget::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
    {
        p1 = e->globalPos()-frameGeometry().topLeft();
    }
}

void register_widget::on_comfirm_pushButton_clicked()
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
            model_reg = new QSqlTableModel(this);
            model_reg -> setTable("user");
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
                qDebug()<<"123123";
                if(acc == query.value("account").toInt())
                {
                    QMessageBox::warning(this,NULL,"账号已存在，请重新输入");
                    //flag = 1;
                    return;
                }
                else
                {
                    qDebug()<<"no";
                    continue;
                }
            }
            query.prepare("INSERT INTO user (account, password, email) VALUES (?,?,?)");
            query.addBindValue(acc);
            query.addBindValue(pass);
            query.addBindValue(email);
            bool ni= query.exec();
            if(!ni)
            {
                QSqlError lastError=query.lastError ();
                qDebug()<<lastError.driverText ()<<QString(QObject::tr ("插入失败\n"));
                QMessageBox::warning(this,NULL,"注册失败，请重新输入");
            }
            else
            {
                qDebug()<<QObject::tr ("插入成功\n");
                close();
            }
        }
        else
        {
            QMessageBox::warning(this,NULL,"密码不相同！");
        }
    }
}
