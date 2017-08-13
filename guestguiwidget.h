#ifndef GUESTGUIWIDGET_H
#define GUESTGUIWIDGET_H

#include <QWidget>
#include <QDebug>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlQuery>

#define SQLADDRESS "/home/emrys/test/test/LibrarySystem_GuestGUI/GuestGUI/librarian.db"

namespace Ui {
    class GuestGUIWidget;
}

class GuestGUIWidget : public QWidget
{
        Q_OBJECT

    public:
        explicit GuestGUIWidget(QWidget *parent = 0);
        ~GuestGUIWidget();

    private slots:
        void on_exitButton_clicked();

        void on_searchingButton_clicked();

        void on_borrowButton_clicked();

    private:
        Ui::GuestGUIWidget *ui;
        QSqlTableModel *userModel;
        QSqlTableModel *bookModel;
};

#endif // GUESTGUIWIDGET_H
