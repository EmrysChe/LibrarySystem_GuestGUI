#ifndef TCP_SERVER_H
#define TCP_SERVER_H

#include <QWidget>
#include <QTcpServer> //1、网络传输协议，一种可靠地网络传递方式
//server服务器:
#include <QTcpSocket> //2、
#include <QDebug>
#include <QList>

namespace Ui {
class tcp_server;
}

class tcp_server : public QWidget
{
    Q_OBJECT

public:
    explicit tcp_server(QWidget *parent = 0);
    ~tcp_server();
private slots:
    void slotNewConnect();
    void slotReadDate();
    void slotDisconnected();
private:
    Ui::tcp_server *ui;
    QTcpServer *server;
    QTcpSocket *socket;
    QList<QTcpSocket *> ListClient;
};

#endif // TCP_SERVER_H
