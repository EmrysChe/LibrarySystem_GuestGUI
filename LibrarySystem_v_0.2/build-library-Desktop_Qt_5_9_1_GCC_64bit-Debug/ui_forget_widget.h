/********************************************************************************
** Form generated from reading UI file 'forget_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGET_WIDGET_H
#define UI_FORGET_WIDGET_H

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

class Ui_forget_widget
{
public:
    QPushButton *confirm_pushButton;
    QPushButton *cancel_pushButton;
    QLabel *label_5;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *acc_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *email_lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *pass_lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *pass2_lineEdit;

    void setupUi(QWidget *forget_widget)
    {
        if (forget_widget->objectName().isEmpty())
            forget_widget->setObjectName(QStringLiteral("forget_widget"));
        forget_widget->resize(300, 328);
        forget_widget->setStyleSheet(QLatin1String("QPushButton#confirm_pushButton\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_normal.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#confirm_pushButton:hover\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_hover.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#confirm_pushButton:pressed\n"
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
        confirm_pushButton = new QPushButton(forget_widget);
        confirm_pushButton->setObjectName(QStringLiteral("confirm_pushButton"));
        confirm_pushButton->setGeometry(QRect(30, 270, 89, 31));
        cancel_pushButton = new QPushButton(forget_widget);
        cancel_pushButton->setObjectName(QStringLiteral("cancel_pushButton"));
        cancel_pushButton->setGeometry(QRect(180, 270, 89, 31));
        label_5 = new QLabel(forget_widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(120, 20, 71, 31));
        QFont font;
        font.setPointSize(13);
        label_5->setFont(font);
        layoutWidget = new QWidget(forget_widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 70, 241, 191));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        acc_lineEdit = new QLineEdit(layoutWidget);
        acc_lineEdit->setObjectName(QStringLiteral("acc_lineEdit"));

        horizontalLayout->addWidget(acc_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        email_lineEdit = new QLineEdit(layoutWidget);
        email_lineEdit->setObjectName(QStringLiteral("email_lineEdit"));

        horizontalLayout_2->addWidget(email_lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        pass_lineEdit = new QLineEdit(layoutWidget);
        pass_lineEdit->setObjectName(QStringLiteral("pass_lineEdit"));

        horizontalLayout_3->addWidget(pass_lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        pass2_lineEdit = new QLineEdit(layoutWidget);
        pass2_lineEdit->setObjectName(QStringLiteral("pass2_lineEdit"));

        horizontalLayout_4->addWidget(pass2_lineEdit);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(forget_widget);
        QObject::connect(cancel_pushButton, SIGNAL(clicked()), forget_widget, SLOT(close()));

        QMetaObject::connectSlotsByName(forget_widget);
    } // setupUi

    void retranslateUi(QWidget *forget_widget)
    {
        forget_widget->setWindowTitle(QApplication::translate("forget_widget", "Form", Q_NULLPTR));
        confirm_pushButton->setText(QApplication::translate("forget_widget", "\347\241\256\350\256\244", Q_NULLPTR));
        cancel_pushButton->setText(QApplication::translate("forget_widget", "\345\217\226\346\266\210", Q_NULLPTR));
        label_5->setText(QApplication::translate("forget_widget", "\345\277\230\350\256\260\345\257\206\347\240\201", Q_NULLPTR));
        label->setText(QApplication::translate("forget_widget", "\350\264\246\345\217\267         ", Q_NULLPTR));
        label_2->setText(QApplication::translate("forget_widget", "email       ", Q_NULLPTR));
        label_3->setText(QApplication::translate("forget_widget", "\346\226\260\345\257\206\347\240\201     ", Q_NULLPTR));
        label_4->setText(QApplication::translate("forget_widget", "\347\241\256\350\256\244\345\257\206\347\240\201 ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class forget_widget: public Ui_forget_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGET_WIDGET_H
