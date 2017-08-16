#ifndef USER_RESERCH_WIDGET_H
#define USER_RESERCH_WIDGET_H

#include <QWidget>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlQuery>
#include <QDebug>
#include <QPoint>
#include <QMouseEvent>
#include <QTcpSocket>
#include <QTcpServer>

struct User2
{
    QString account;
    QString password;
    QString email;
    QString book1_id;
    QString book1_name;
    QString book1_borrowDate;
    QString book1_returnDate;
    QString book2_id;
    QString book2_name;
    QString book2_borrowDate;
    QString book2_returnDate;
};

namespace Ui {
class user_reserch_widget;
}

class user_reserch_widget : public QWidget
{
    Q_OBJECT

public:
    explicit user_reserch_widget(QWidget *parent = 0);
    ~user_reserch_widget();
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);

private slots:
    void on_find_pushButton_clicked();
    void on_borrow_pushButton_clicked();
    void on_add_pushButton_clicked();
    void on_del_pushButton_clicked();

    //void on_send_pushButton_clicked();

    void on_connect_pushButton_clicked();
    void on_send_pushButton_clicked();

    void slotDisConnected();
    void slotConnected();
    void slotReadDate();
    void slotError(QAbstractSocket::SocketError);
    void slotStateChanged(QAbstractSocket:: SocketState);

    void on_freshButton_clicked();

    private:
    Ui::user_reserch_widget *ui;
    QSqlTableModel *re_model;
    QSqlTableModel *user_model;
    QTcpSocket *socket;
    bool isConnected;
    QList<QTcpSocket *> ListClient;
    QTcpServer *server;
    User2 userbuf;
    QString buf;
    QPoint p1;
};

#endif // USER_RESERCH_WIDGET_H
