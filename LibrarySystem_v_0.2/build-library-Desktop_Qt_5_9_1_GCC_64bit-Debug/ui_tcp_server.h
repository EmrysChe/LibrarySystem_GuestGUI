/********************************************************************************
** Form generated from reading UI file 'tcp_server.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCP_SERVER_H
#define UI_TCP_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tcp_server
{
public:

    void setupUi(QWidget *tcp_server)
    {
        if (tcp_server->objectName().isEmpty())
            tcp_server->setObjectName(QStringLiteral("tcp_server"));
        tcp_server->resize(400, 300);

        retranslateUi(tcp_server);

        QMetaObject::connectSlotsByName(tcp_server);
    } // setupUi

    void retranslateUi(QWidget *tcp_server)
    {
        tcp_server->setWindowTitle(QApplication::translate("tcp_server", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tcp_server: public Ui_tcp_server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCP_SERVER_H
