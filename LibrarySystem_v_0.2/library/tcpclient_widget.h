#ifndef TCPCLIENT_WIDGET_H
#define TCPCLIENT_WIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QMessageBox>
#include <QHostAddress>
#include <QDebug>
#include <QPoint>
#include <QMouseEvent>
#include <QAbstractSocket>
#include <QTcpServer>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlQuery>

namespace Ui {
class tcpClient_widget;
}

class tcpClient_widget : public QWidget
{
    Q_OBJECT

public:
    explicit tcpClient_widget(QWidget *parent = 0);
    ~tcpClient_widget();
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);

private slots:
    void slotConnected();
    void slotDisConnected();
    void on_send_pushButton_clicked();
    void slotError(QAbstractSocket::SocketError);
    void slotStateChanged(QAbstractSocket:: SocketState);

    void on_connect_pushButton_clicked();
    void slotReadDate();

    void on_pushButton_2_clicked();

    void on_logInButton_clicked();

    private:
    Ui::tcpClient_widget *ui;
    QTcpSocket *socket;
    bool isConnected;
    QList<QTcpSocket *> ListClient;
    QTcpServer *server;
    QPoint p1;
    int flag;
};
#endif // TCPCLIENT_WIDGET_H
