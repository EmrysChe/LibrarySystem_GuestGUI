#include "tcp_server.h"
#include "ui_tcp_server.h"

tcp_server::tcp_server(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tcp_server)
{
    ui->setupUi(this);
    server = new QTcpServer;
    server->listen(QHostAddress::Any,8080);
    connect(server,SIGNAL(newConnection()),this,SLOT(slotNewConnect()));
}

tcp_server::~tcp_server()
{
    delete ui;
}

void tcp_server::slotNewConnect()
{
    qDebug()<<"have a client connecting!";
    if(server->hasPendingConnections())
    {
        socket = server->nextPendingConnection();
        connect(socket,SIGNAL(readyRead()),this,SLOT(slotReadDate()));
        ListClient<<socket;
        connect(socket,SIGNAL(disconnected()),this,SLOT(slotDisconnected()));
    }
}

void tcp_server::slotReadDate()
{
    foreach(QTcpSocket *cli,ListClient)
    {
        if(cli->bytesAvailable() > 0)
        {
            QByteArray ba = cli->readAll();
            foreach(QTcpSocket *cli2,ListClient)
            {
                cli2->write(ba);
            }
        }

    }
}

void tcp_server::slotDisconnected()
{
    for(int i=0;i<ListClient.count();i++)
    {
        QTcpSocket *cli = ListClient[i];
        if(cli->socketDescriptor()== -1)
        {
            //delete ui->ipWidget->takeItem(i);
            ListClient.removeAt(i);
            break;
        }
    }
}
