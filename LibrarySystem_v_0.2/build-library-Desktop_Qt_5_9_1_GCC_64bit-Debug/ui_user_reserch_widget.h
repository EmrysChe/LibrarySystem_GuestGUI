/********************************************************************************
** Form generated from reading UI file 'user_reserch_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_RESERCH_WIDGET_H
#define UI_USER_RESERCH_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_reserch_widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QRadioButton *id_radioButton;
    QRadioButton *name_radioButton;
    QRadioButton *author_radioButton;
    QPushButton *add_pushButton;
    QLineEdit *input_lineEdit;
    QPushButton *find_pushButton;
    QPushButton *del_pushButton;
    QLineEdit *lineEdit;
    QLineEdit *id_lineEdit;
    QPushButton *borrow_pushButton;
    QLineEdit *send_lineEdit;
    QPushButton *send_pushButton;
    QPushButton *connect_pushButton;
    QTableView *tableView;
    QTableView *tableView_2;
    QListWidget *listWidget;

    void setupUi(QWidget *user_reserch_widget)
    {
        if (user_reserch_widget->objectName().isEmpty())
            user_reserch_widget->setObjectName(QStringLiteral("user_reserch_widget"));
        user_reserch_widget->resize(885, 598);
        user_reserch_widget->setStyleSheet(QLatin1String("QPushButton#connect_pushButton\n"
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
"QPushButton#pushButton:pressed\n"
"{\n"
"	border-image:url(:/pic/pic/btn_close_down.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#add_pushButton\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_normal.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#add_pushButton:hover\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_hover.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#add_pus"
                        "hButton:pressed\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_down.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#del_pushButton\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_normal.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#del_pushButton:hover\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_hover.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#del_pushButton:pressed\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_down.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#send_pushButton\n"
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
"QPushButton#find_pushButton\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_normal.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#find_pushButton:"
                        "hover\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_hover.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#find_pushButton:pressed\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_down.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#borrow_pushButton\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_normal.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#borrow_pushButton:hover\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_hover.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#borrow_pushButton:pressed\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_down.png)0 0 0 0 strecth strecth\n"
"}"));
        label = new QLabel(user_reserch_widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 101, 41));
        label_2 = new QLabel(user_reserch_widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 240, 91, 31));
        pushButton = new QPushButton(user_reserch_widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(850, 0, 41, 30));
        label_3 = new QLabel(user_reserch_widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, -1, 891, 601));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/pic/pic/2.jpg")));
        id_radioButton = new QRadioButton(user_reserch_widget);
        id_radioButton->setObjectName(QStringLiteral("id_radioButton"));
        id_radioButton->setGeometry(QRect(81, 471, 47, 25));
        name_radioButton = new QRadioButton(user_reserch_widget);
        name_radioButton->setObjectName(QStringLiteral("name_radioButton"));
        name_radioButton->setGeometry(QRect(135, 471, 127, 25));
        author_radioButton = new QRadioButton(user_reserch_widget);
        author_radioButton->setObjectName(QStringLiteral("author_radioButton"));
        author_radioButton->setGeometry(QRect(269, 471, 136, 25));
        add_pushButton = new QPushButton(user_reserch_widget);
        add_pushButton->setObjectName(QStringLiteral("add_pushButton"));
        add_pushButton->setGeometry(QRect(380, 240, 101, 41));
        input_lineEdit = new QLineEdit(user_reserch_widget);
        input_lineEdit->setObjectName(QStringLiteral("input_lineEdit"));
        input_lineEdit->setGeometry(QRect(80, 510, 231, 30));
        find_pushButton = new QPushButton(user_reserch_widget);
        find_pushButton->setObjectName(QStringLiteral("find_pushButton"));
        find_pushButton->setGeometry(QRect(320, 500, 101, 41));
        del_pushButton = new QPushButton(user_reserch_widget);
        del_pushButton->setObjectName(QStringLiteral("del_pushButton"));
        del_pushButton->setGeometry(QRect(490, 240, 101, 41));
        lineEdit = new QLineEdit(user_reserch_widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 550, 163, 30));
        id_lineEdit = new QLineEdit(user_reserch_widget);
        id_lineEdit->setObjectName(QStringLiteral("id_lineEdit"));
        id_lineEdit->setGeometry(QRect(265, 551, 163, 30));
        id_lineEdit->setMaximumSize(QSize(300, 16777215));
        id_lineEdit->setCursorPosition(0);
        borrow_pushButton = new QPushButton(user_reserch_widget);
        borrow_pushButton->setObjectName(QStringLiteral("borrow_pushButton"));
        borrow_pushButton->setGeometry(QRect(440, 540, 101, 41));
        send_lineEdit = new QLineEdit(user_reserch_widget);
        send_lineEdit->setObjectName(QStringLiteral("send_lineEdit"));
        send_lineEdit->setGeometry(QRect(611, 485, 163, 30));
        send_pushButton = new QPushButton(user_reserch_widget);
        send_pushButton->setObjectName(QStringLiteral("send_pushButton"));
        send_pushButton->setGeometry(QRect(794, 480, 71, 41));
        connect_pushButton = new QPushButton(user_reserch_widget);
        connect_pushButton->setObjectName(QStringLiteral("connect_pushButton"));
        connect_pushButton->setGeometry(QRect(660, 530, 141, 41));
        tableView = new QTableView(user_reserch_widget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 60, 579, 181));
        tableView_2 = new QTableView(user_reserch_widget);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(10, 280, 579, 181));
        listWidget = new QListWidget(user_reserch_widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(612, 62, 254, 401));
        label_3->raise();
        label->raise();
        label_2->raise();
        pushButton->raise();
        id_radioButton->raise();
        name_radioButton->raise();
        author_radioButton->raise();
        add_pushButton->raise();
        input_lineEdit->raise();
        find_pushButton->raise();
        del_pushButton->raise();
        lineEdit->raise();
        id_lineEdit->raise();
        borrow_pushButton->raise();
        send_lineEdit->raise();
        send_pushButton->raise();
        connect_pushButton->raise();
        tableView->raise();
        tableView_2->raise();
        listWidget->raise();

        retranslateUi(user_reserch_widget);
        QObject::connect(pushButton, SIGNAL(clicked()), user_reserch_widget, SLOT(close()));

        QMetaObject::connectSlotsByName(user_reserch_widget);
    } // setupUi

    void retranslateUi(QWidget *user_reserch_widget)
    {
        user_reserch_widget->setWindowTitle(QApplication::translate("user_reserch_widget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("user_reserch_widget", "<html><head/><body><p><span style=\" font-size:14pt; font-style:italic; color:#ffff00;\">\344\271\246\347\261\215\344\277\241\346\201\257</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("user_reserch_widget", "<html><head/><body><p><span style=\" font-size:14pt; font-style:italic; color:#ffff00;\">\347\224\250\346\210\267\344\277\241\346\201\257</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QString());
        label_3->setText(QString());
        id_radioButton->setText(QApplication::translate("user_reserch_widget", "id", Q_NULLPTR));
        name_radioButton->setText(QApplication::translate("user_reserch_widget", "book_name", Q_NULLPTR));
        author_radioButton->setText(QApplication::translate("user_reserch_widget", "book_author", Q_NULLPTR));
        add_pushButton->setText(QApplication::translate("user_reserch_widget", "add", Q_NULLPTR));
        find_pushButton->setText(QApplication::translate("user_reserch_widget", "find", Q_NULLPTR));
        del_pushButton->setText(QApplication::translate("user_reserch_widget", "del", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("user_reserch_widget", "\347\224\250\346\210\267\350\264\246\345\217\267", Q_NULLPTR));
        id_lineEdit->setText(QString());
        id_lineEdit->setPlaceholderText(QApplication::translate("user_reserch_widget", "\350\257\267\350\276\223\345\205\245\344\271\246\346\234\254ID", Q_NULLPTR));
        borrow_pushButton->setText(QApplication::translate("user_reserch_widget", "return", Q_NULLPTR));
        send_pushButton->setText(QApplication::translate("user_reserch_widget", "send", Q_NULLPTR));
        connect_pushButton->setText(QApplication::translate("user_reserch_widget", "connect", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class user_reserch_widget: public Ui_user_reserch_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_RESERCH_WIDGET_H
