/********************************************************************************
** Form generated from reading UI file 'register_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_WIDGET_H
#define UI_REGISTER_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_register_widget
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *acc_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *pass_lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *pass2_lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *email_lineEdit;
    QPushButton *comfirm_pushButton;
    QPushButton *cancel_pushButton;

    void setupUi(QWidget *register_widget)
    {
        if (register_widget->objectName().isEmpty())
            register_widget->setObjectName(QStringLiteral("register_widget"));
        register_widget->resize(288, 346);
        register_widget->setStyleSheet(QLatin1String("QPushButton#comfirm_pushButton\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_normal.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#comfirm_pushButton:hover\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_hover.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#comfirm_pushButton:pressed\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_down.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#cancel_pushButton\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_normal.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#cancel_pushButton:hover\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_hover.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#cancel_pushButton:pressed\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_down.png)0 0 0 0 strecth strecth\n"
"}"));
        label = new QLabel(register_widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 183, 34));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);
        layoutWidget = new QWidget(register_widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 60, 231, 191));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        acc_lineEdit = new QLineEdit(layoutWidget);
        acc_lineEdit->setObjectName(QStringLiteral("acc_lineEdit"));
        acc_lineEdit->setMinimumSize(QSize(150, 0));
        acc_lineEdit->setMaximumSize(QSize(150, 16777215));

        horizontalLayout->addWidget(acc_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        pass_lineEdit = new QLineEdit(layoutWidget);
        pass_lineEdit->setObjectName(QStringLiteral("pass_lineEdit"));
        pass_lineEdit->setMinimumSize(QSize(150, 0));
        pass_lineEdit->setMaximumSize(QSize(150, 16777215));
        pass_lineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(pass_lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        pass2_lineEdit = new QLineEdit(layoutWidget);
        pass2_lineEdit->setObjectName(QStringLiteral("pass2_lineEdit"));
        pass2_lineEdit->setMinimumSize(QSize(150, 0));
        pass2_lineEdit->setMaximumSize(QSize(150, 16777215));
        pass2_lineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(pass2_lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        email_lineEdit = new QLineEdit(layoutWidget);
        email_lineEdit->setObjectName(QStringLiteral("email_lineEdit"));
        email_lineEdit->setMinimumSize(QSize(150, 0));
        email_lineEdit->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_4->addWidget(email_lineEdit);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        comfirm_pushButton = new QPushButton(register_widget);
        comfirm_pushButton->setObjectName(QStringLiteral("comfirm_pushButton"));
        comfirm_pushButton->setGeometry(QRect(20, 260, 101, 41));
        cancel_pushButton = new QPushButton(register_widget);
        cancel_pushButton->setObjectName(QStringLiteral("cancel_pushButton"));
        cancel_pushButton->setGeometry(QRect(160, 260, 101, 41));

        retranslateUi(register_widget);
        QObject::connect(cancel_pushButton, SIGNAL(clicked()), register_widget, SLOT(close()));

        QMetaObject::connectSlotsByName(register_widget);
    } // setupUi

    void retranslateUi(QWidget *register_widget)
    {
        register_widget->setWindowTitle(QApplication::translate("register_widget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("register_widget", "          \346\231\256\351\200\232\347\224\250\346\210\267\346\263\250\345\206\214", Q_NULLPTR));
        label_2->setText(QApplication::translate("register_widget", "\350\264\246\345\217\267        ", Q_NULLPTR));
        label_3->setText(QApplication::translate("register_widget", "\345\257\206\347\240\201        ", Q_NULLPTR));
        pass_lineEdit->setPlaceholderText(QString());
        label_4->setText(QApplication::translate("register_widget", "\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        pass2_lineEdit->setPlaceholderText(QString());
        label_5->setText(QApplication::translate("register_widget", "\351\202\256\347\256\261        ", Q_NULLPTR));
        comfirm_pushButton->setText(QApplication::translate("register_widget", "\347\241\256\350\256\244", Q_NULLPTR));
        cancel_pushButton->setText(QApplication::translate("register_widget", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class register_widget: public Ui_register_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_WIDGET_H
