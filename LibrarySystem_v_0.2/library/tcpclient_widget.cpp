#include "tcpclient_widget.h"
#include "ui_tcpclient_widget.h"

tcpClient_widget::tcpClient_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tcpClient_widget)
{
    ui->setupUi(this);
    flag = 0;
    setWindowFlags(Qt::FramelessWindowHint);
    ui->send_lineEdit->setDisabled(true);
    ui->send_pushButton->setDisabled(true);
    isConnected = false;
    //socket = server->nextPendingConnection();
    //connect(socket,SIGNAL(readyRead()),this,SLOT(slotReadDate()));
}


tcpClient_widget::~tcpClient_widget()
{
    delete ui;
}

void tcpClient_widget::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()&Qt::LeftButton)
    {
        move(e->globalPos()-p1);
    }
}

void tcpClient_widget::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
    {
        p1 = e->globalPos()-frameGeometry().topLeft();
    }
}

void tcpClient_widget::on_connect_pushButton_clicked()
{
    if(!isConnected)
    {
        if(ui->iplineEdit->text().isEmpty() || ui->portlineEdit->text().isEmpty() || flag == 0)
        {
         QMessageBox::critical(this,NULL,"please input IP and Port and your account");
         return;
        }
        QString hostAddrStr = ui->iplineEdit->text();
        quint16 hostPort = ui->portlineEdit->text().toShort();

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
void tcpClient_widget::slotConnected()
{
    qDebug()<<"Client connect Host success";
    ui->send_lineEdit->setDisabled(false);
    ui->send_pushButton->setDisabled(false);
    isConnected = true;
    ui->connect_pushButton->setText("Disconnect");
}

void tcpClient_widget::slotDisConnected()
{
    qDebug()<<"Client disconnect Host success";
    socket->disconnect();
    ui->send_lineEdit->setDisabled(true);
    ui->send_pushButton->setDisabled(true);
    ui->connect_pushButton->setText("Connect");
    isConnected = false;
    flag = 0;
    ui->nameLineEdit->setDisabled(false);
    ui->pswLineEdit->setDisabled(false);
    ui->logInButton->setDisabled(false);
}

void tcpClient_widget::slotError(QAbstractSocket::SocketError socketError)
{
    qDebug()<<socketError;
}

void tcpClient_widget::slotStateChanged(QAbstractSocket::SocketState socketChanged)
{
    qDebug()<<socketChanged;
}


void tcpClient_widget::on_send_pushButton_clicked()
{
    if(!ui->send_lineEdit->text().isEmpty())
    {
        QTextStream out(socket);
        out<<ui->nameLineEdit->text() + " :" + ui->send_lineEdit->text();
    }
}

void tcpClient_widget::slotReadDate()
{
    QByteArray ba = socket->readAll();//获取其值
    ui->listWidget->addItem(ba);
}

void tcpClient_widget::on_pushButton_2_clicked()
{
    this->hide();
}

void tcpClient_widget::on_logInButton_clicked()
{
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
            if(ui->nameLineEdit->text().toInt() == acc && ui->pswLineEdit->text().toInt() == pass)
            {
                flag = 1;
                QMessageBox::information(this,NULL,"success");
                ui->nameLineEdit->setDisabled(true);
                ui->pswLineEdit->setDisabled(true);
                ui->logInButton->setDisabled(true);
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
