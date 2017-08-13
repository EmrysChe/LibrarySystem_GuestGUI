#include "guestguiwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(SQLADDRESS);
    if(!database.open())
    {
        qDebug() << database.lastError();
    }
    else
    {
        qDebug() << "success";
    }
    GuestGUIWidget w;
    w.show();

    return a.exec();
}
