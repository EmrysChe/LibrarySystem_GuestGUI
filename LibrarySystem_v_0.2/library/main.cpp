#include "library_user_widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //QString get_account;
    QApplication a(argc, argv);
    QSqlDatabase datanase = QSqlDatabase::addDatabase("QSQLITE");
    datanase.setDatabaseName("/home/emrys/test/test/LibrarySystem_GuestGUI/LibrarySystem_v_0.2/library/library.db");
    if(!datanase.open())
    {
        qDebug()<<datanase.lastError();
        qDebug()<<"open failed";

    }
    else
    {
        qDebug()<<"sqlite success";
        qDebug()<<datanase.tables();
    }
    library_user_Widget w;
    w.show();
    tcp_server d;


    return a.exec();
}
