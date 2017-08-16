#ifndef LIBRARY_USER_WIDGET_H
#define LIBRARY_USER_WIDGET_H

#include <QWidget>
#include <QDebug>
#include <QPoint>
#include <QMouseEvent>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlQuery>
#include "register_widget.h"
#include "forget_widget.h"
#include "tcpclient_widget.h"
#include "user_reserch_widget.h"
#include "tcp_server.h"
#include "guestguiwidget.h"

#define SQLADDRESS "/home/emrys/test/test/LibrarySystem_GuestGUI/LibrarySystem_v_0.2/library/library.db"

class GuestGUIWidget;

namespace Ui {
class library_user_Widget;
}

class library_user_Widget : public QWidget
{
    Q_OBJECT

public:
    explicit library_user_Widget(QWidget *parent = 0);
    ~library_user_Widget();
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);

private slots:
    void on_login_pushButton_clicked();

    void on_register_pushButton_clicked();
    void on_forget_pushButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::library_user_Widget *ui;
    QSqlTableModel *model;
    register_widget *rp;
    forget_widget *fp;
    tcpClient_widget *tp;
    user_reserch_widget *up;
    GuestGUIWidget *gp;
    QPoint p1;
 signals:
    void sendData(int);
};

#endif // LIBRARY_USER_WIDGET_H
