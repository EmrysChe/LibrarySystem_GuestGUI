/********************************************************************************
** Form generated from reading UI file 'library_user_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARY_USER_WIDGET_H
#define UI_LIBRARY_USER_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_library_user_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QPushButton *register_pushButton;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *login_pushButton;
    QPushButton *pushButton;
    QLineEdit *acc_num_lineEdit;
    QLineEdit *password_lineEdit;
    QPushButton *forget_pushButton;

    void setupUi(QWidget *library_user_Widget)
    {
        if (library_user_Widget->objectName().isEmpty())
            library_user_Widget->setObjectName(QStringLiteral("library_user_Widget"));
        library_user_Widget->resize(373, 364);
        library_user_Widget->setStyleSheet(QLatin1String("QPushButton#login_pushButton\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_normal.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#login_pushButton:hover\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_hover.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#login_pushButton:pressed\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_down.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#pushButton_2\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_normal.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#pushButton_2:hover\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_hover.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#pushButton_2:pressed\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_down.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#register_pushButton\n"
"{\n"
"	border-image:url(:/pic/pic/zhuce.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#register_pushButton:hover\n"
"{\n"
"	border-image:url(:/pic/pic/zhuce_hover.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#register_push"
                        "Button:pressed\n"
"{\n"
"	border-image:url(:/pic/pic/zhuce_press.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#forget_pushButton\n"
"{\n"
"	border-image:url(:/pic/pic/mima.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#forget_pushButton:hover\n"
"{\n"
"	border-image:url(:/pic/pic/mima_hover.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#forget_pushButton:pressed\n"
"{\n"
"	border-image:url(:/pic/pic/mima_press.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#pushButton\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_normal.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#pushButton:hover\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_hover.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#pushButton:pressed\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_down.png)0 0 0 0 strecth strecth\n"
"}"));
        label = new QLabel(library_user_Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 110, 54, 31));
        label_2 = new QLabel(library_user_Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 150, 51, 31));
        label_3 = new QLabel(library_user_Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 40, 201, 61));
        pushButton_2 = new QPushButton(library_user_Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 230, 101, 37));
        label_4 = new QLabel(library_user_Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 0, 441, 361));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/pic/pic/beijing.jpg")));
        register_pushButton = new QPushButton(library_user_Widget);
        register_pushButton->setObjectName(QStringLiteral("register_pushButton"));
        register_pushButton->setGeometry(QRect(272, 117, 47, 20));
        radioButton = new QRadioButton(library_user_Widget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(90, 190, 85, 32));
        radioButton_2 = new QRadioButton(library_user_Widget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(190, 190, 103, 32));
        login_pushButton = new QPushButton(library_user_Widget);
        login_pushButton->setObjectName(QStringLiteral("login_pushButton"));
        login_pushButton->setGeometry(QRect(60, 230, 101, 37));
        pushButton = new QPushButton(library_user_Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 280, 241, 37));
        acc_num_lineEdit = new QLineEdit(library_user_Widget);
        acc_num_lineEdit->setObjectName(QStringLiteral("acc_num_lineEdit"));
        acc_num_lineEdit->setGeometry(QRect(102, 112, 163, 30));
        password_lineEdit = new QLineEdit(library_user_Widget);
        password_lineEdit->setObjectName(QStringLiteral("password_lineEdit"));
        password_lineEdit->setGeometry(QRect(102, 151, 163, 30));
        password_lineEdit->setEchoMode(QLineEdit::Password);
        forget_pushButton = new QPushButton(library_user_Widget);
        forget_pushButton->setObjectName(QStringLiteral("forget_pushButton"));
        forget_pushButton->setGeometry(QRect(272, 156, 47, 20));
        label_4->raise();
        label_3->raise();
        pushButton_2->raise();
        radioButton->raise();
        radioButton_2->raise();
        login_pushButton->raise();
        pushButton->raise();
        label->raise();
        label_2->raise();
        password_lineEdit->raise();
        acc_num_lineEdit->raise();
        forget_pushButton->raise();
        register_pushButton->raise();

        retranslateUi(library_user_Widget);
        QObject::connect(pushButton_2, SIGNAL(clicked()), library_user_Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(library_user_Widget);
    } // setupUi

    void retranslateUi(QWidget *library_user_Widget)
    {
        library_user_Widget->setWindowTitle(QApplication::translate("library_user_Widget", "library_user_Widget", Q_NULLPTR));
        label->setText(QApplication::translate("library_user_Widget", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("library_user_Widget", "\345\257\206\347\240\201", Q_NULLPTR));
        label_3->setText(QApplication::translate("library_user_Widget", "<html><head/><body><p><span style=\" font-size:24pt; font-style:italic; color:#ffff00;\">\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("library_user_Widget", "\351\200\200\345\207\272", Q_NULLPTR));
        label_4->setText(QString());
        register_pushButton->setText(QString());
        radioButton->setText(QApplication::translate("library_user_Widget", "\347\256\241\347\220\206\345\221\230", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("library_user_Widget", "\346\231\256\351\200\232\347\224\250\346\210\267", Q_NULLPTR));
        login_pushButton->setText(QApplication::translate("library_user_Widget", "\347\231\273\345\275\225", Q_NULLPTR));
        pushButton->setText(QApplication::translate("library_user_Widget", "\350\201\224\347\263\273\347\256\241\347\220\206\345\221\230", Q_NULLPTR));
        acc_num_lineEdit->setPlaceholderText(QString());
        password_lineEdit->setPlaceholderText(QString());
        forget_pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class library_user_Widget: public Ui_library_user_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARY_USER_WIDGET_H
