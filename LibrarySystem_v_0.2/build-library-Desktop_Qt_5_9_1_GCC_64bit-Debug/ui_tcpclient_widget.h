/********************************************************************************
** Form generated from reading UI file 'tcpclient_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPCLIENT_WIDGET_H
#define UI_TCPCLIENT_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tcpClient_widget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QListWidget *listWidget;
    QLineEdit *nameLineEdit;
    QPushButton *connect_pushButton;
    QLineEdit *send_lineEdit;
    QPushButton *send_pushButton;
    QLineEdit *iplineEdit;
    QLineEdit *portlineEdit;
    QLabel *label;
    QLineEdit *pswLineEdit;
    QPushButton *logInButton;

    void setupUi(QWidget *tcpClient_widget)
    {
        if (tcpClient_widget->objectName().isEmpty())
            tcpClient_widget->setObjectName(QStringLiteral("tcpClient_widget"));
        tcpClient_widget->resize(393, 467);
        tcpClient_widget->setStyleSheet(QLatin1String("QPushButton#send_pushButton\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_normal.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#send_pushButton:hover\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_hover.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#send_pushButton:pressed\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_down.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#connect_pushButton\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_normal.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#connect_pushButton:hover\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_hover.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#connect_pushButton:pressed\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_down.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#pushButton\n"
"{\n"
"	border-image:url(:/pic/pic/btn_close_normal.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#pushButton:hover\n"
"{\n"
"	border-image:url(:/pic/pic/btn_close_highlight.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButt"
                        "on#pushButton:pressed\n"
"{\n"
"	border-image:url(:/pic/pic/btn_close_down.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#pushButton_2\n"
"{\n"
"	border-image:url(:/pic/pic/btn_mini_normal.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#pushButton_2:hover\n"
"{\n"
"	border-image:url(:/pic/pic/btn_mini_highlight.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#pushButton_2:pressed\n"
"{\n"
"	border-image:url(:/pic/pic/btn_mini_down.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#logInButton\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_normal.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#logInButton:hover\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_hover.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#logInButton:pressed\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_down.png)0 0 0 0 strecth strecth\n"
"}"));
        pushButton = new QPushButton(tcpClient_widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(350, 0, 41, 30));
        pushButton_2 = new QPushButton(tcpClient_widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 0, 41, 30));
        listWidget = new QListWidget(tcpClient_widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 30, 341, 231));
        nameLineEdit = new QLineEdit(tcpClient_widget);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(20, 270, 131, 30));
        connect_pushButton = new QPushButton(tcpClient_widget);
        connect_pushButton->setObjectName(QStringLiteral("connect_pushButton"));
        connect_pushButton->setGeometry(QRect(40, 400, 331, 51));
        send_lineEdit = new QLineEdit(tcpClient_widget);
        send_lineEdit->setObjectName(QStringLiteral("send_lineEdit"));
        send_lineEdit->setGeometry(QRect(20, 310, 271, 31));
        send_pushButton = new QPushButton(tcpClient_widget);
        send_pushButton->setObjectName(QStringLiteral("send_pushButton"));
        send_pushButton->setGeometry(QRect(300, 310, 81, 41));
        iplineEdit = new QLineEdit(tcpClient_widget);
        iplineEdit->setObjectName(QStringLiteral("iplineEdit"));
        iplineEdit->setGeometry(QRect(20, 350, 163, 30));
        iplineEdit->setReadOnly(true);
        portlineEdit = new QLineEdit(tcpClient_widget);
        portlineEdit->setObjectName(QStringLiteral("portlineEdit"));
        portlineEdit->setGeometry(QRect(190, 350, 60, 30));
        portlineEdit->setMaximumSize(QSize(60, 16777215));
        portlineEdit->setReadOnly(true);
        label = new QLabel(tcpClient_widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 391, 471));
        label->setPixmap(QPixmap(QString::fromUtf8(":/pic/pic/1.jpg")));
        pswLineEdit = new QLineEdit(tcpClient_widget);
        pswLineEdit->setObjectName(QStringLiteral("pswLineEdit"));
        pswLineEdit->setGeometry(QRect(160, 270, 131, 28));
        pswLineEdit->setEchoMode(QLineEdit::Password);
        logInButton = new QPushButton(tcpClient_widget);
        logInButton->setObjectName(QStringLiteral("logInButton"));
        logInButton->setGeometry(QRect(300, 270, 81, 41));
        label->raise();
        pushButton->raise();
        pushButton_2->raise();
        listWidget->raise();
        nameLineEdit->raise();
        connect_pushButton->raise();
        send_lineEdit->raise();
        send_pushButton->raise();
        iplineEdit->raise();
        portlineEdit->raise();
        pswLineEdit->raise();
        logInButton->raise();

        retranslateUi(tcpClient_widget);
        QObject::connect(pushButton, SIGNAL(clicked()), tcpClient_widget, SLOT(close()));

        QMetaObject::connectSlotsByName(tcpClient_widget);
    } // setupUi

    void retranslateUi(QWidget *tcpClient_widget)
    {
        tcpClient_widget->setWindowTitle(QApplication::translate("tcpClient_widget", "Form", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        nameLineEdit->setPlaceholderText(QApplication::translate("tcpClient_widget", "account", Q_NULLPTR));
        connect_pushButton->setText(QApplication::translate("tcpClient_widget", "connect", Q_NULLPTR));
        send_pushButton->setText(QApplication::translate("tcpClient_widget", "send", Q_NULLPTR));
        iplineEdit->setText(QApplication::translate("tcpClient_widget", "127.0.0.1", Q_NULLPTR));
        portlineEdit->setText(QApplication::translate("tcpClient_widget", "8080", Q_NULLPTR));
        label->setText(QString());
        pswLineEdit->setPlaceholderText(QApplication::translate("tcpClient_widget", "password", Q_NULLPTR));
        logInButton->setText(QApplication::translate("tcpClient_widget", "Log in", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tcpClient_widget: public Ui_tcpClient_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPCLIENT_WIDGET_H
