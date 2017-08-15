#ifndef LIBRARY_USER_WIDGET_H
#define LIBRARY_USER_WIDGET_H

#include <QWidget>
#include <QDebug>
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

namespace Ui {
class library_user_Widget;
}

class library_user_Widget : public QWidget
{
    Q_OBJECT

public:
    explicit library_user_Widget(QWidget *parent = 0);
    ~library_user_Widget();

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


};

#endif // LIBRARY_USER_WIDGET_H
