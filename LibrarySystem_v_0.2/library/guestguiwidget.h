#ifndef GUESTGUIWIDGET_H
#define GUESTGUIWIDGET_H

#include <QWidget>
#include <QDebug>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QDateTime>
#include <QMouseEvent>
#include <QPoint>
#include <QHeaderView>

#include "library_user_widget.h"

#define SQLADDRESS "/home/emrys/test/test/LibrarySystem_GuestGUI/GuestGUI/librarian.db"

class library_user_Widget;

namespace Ui {
    class GuestGUIWidget;
}

struct Book
{
        QString name;
        QString id;
        QString author;
        int totle;
        int left;
};

struct User
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

class GuestGUIWidget : public QWidget
{
        Q_OBJECT

    public:
        explicit GuestGUIWidget(QWidget *parent = 0);
        ~GuestGUIWidget();
        void mouseMoveEvent(QMouseEvent *e);
        void mousePressEvent(QMouseEvent *e);

    private slots:
        void on_exitButton_clicked();

        void on_searchingButton_clicked();

        void on_borrowButton_clicked();

        void on_returnButton_clicked();

        void on_logOffButton_clicked();
        void receiveData(int data);

        void on_pushButton_clicked();

    private:
        Ui::GuestGUIWidget *ui;
        QSqlTableModel *userModel;
        QSqlTableModel *userbook1Model;
        QSqlTableModel *userbook2Model;
        QSqlTableModel *bookModel;
        QDateTime current_date_time;
        QString current_date;
        QString buf;//deal string
        QString get_account;
        QPoint p1;
        struct Book bookdatabuf;
        struct User userbuf;
        library_user_Widget *cp;
};

#endif // GUESTGUIWIDGET_H
