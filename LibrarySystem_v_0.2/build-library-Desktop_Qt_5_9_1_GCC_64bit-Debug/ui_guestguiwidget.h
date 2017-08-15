/********************************************************************************
** Form generated from reading UI file 'guestguiwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUESTGUIWIDGET_H
#define UI_GUESTGUIWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuestGUIWidget
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *exitButton;
    QLabel *label_4;
    QTableView *bookInformationTableView;
    QTableView *book1TableView;
    QTableView *book2TableView;
    QPushButton *pushButton;
    QPushButton *logOffButton;
    QPushButton *returnButton;
    QPushButton *borrowButton;
    QPushButton *searchingButton;
    QLineEdit *searchBookLineEdit;
    QTableView *userInformationTableView;
    QCalendarWidget *calendarWidget;

    void setupUi(QWidget *GuestGUIWidget)
    {
        if (GuestGUIWidget->objectName().isEmpty())
            GuestGUIWidget->setObjectName(QStringLiteral("GuestGUIWidget"));
        GuestGUIWidget->resize(779, 620);
        GuestGUIWidget->setStyleSheet(QLatin1String("QPushButton#exitButton\n"
"{\n"
"	border-image:url(:/pic/pic/btn_close_normal.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#exitButton:hover\n"
"{\n"
"	border-image:url(:/pic/pic/btn_close_highlight.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#exitButton:pressed\n"
"{\n"
"	border-image:url(:/pic/pic/btn_close_down.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#searchingButton\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_normal.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#searchingButton:hover\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_hover.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#searchingButton:pressed\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_down.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#returnButton\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_normal.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#returnButton:hover\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_hover.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#returnButton:pressed"
                        "\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_down.png)0 0 0 0 strecth strecth\n"
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
"}\n"
"QPushButton#logOffButton\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_normal.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#logOffButton:hover\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_hover.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#logOffButton:pressed\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_down.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#borrowButton\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_normal.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#borrowButton:hover\n"
"{\n"
"	border-image:url(:/pic/pi"
                        "c/button_login_hover.png)0 0 0 0 strecth strecth\n"
"}\n"
"QPushButton#borrowButton:pressed\n"
"{\n"
"	border-image:url(:/pic/pic/button_login_down.png)0 0 0 0 strecth strecth\n"
"}"));
        label = new QLabel(GuestGUIWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 111, 41));
        label_2 = new QLabel(GuestGUIWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 260, 161, 41));
        exitButton = new QPushButton(GuestGUIWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(730, 0, 51, 30));
        exitButton->setMinimumSize(QSize(0, 0));
        exitButton->setMaximumSize(QSize(70, 30));
        label_4 = new QLabel(GuestGUIWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 0, 781, 621));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/pic/pic/2.jpg")));
        bookInformationTableView = new QTableView(GuestGUIWidget);
        bookInformationTableView->setObjectName(QStringLiteral("bookInformationTableView"));
        bookInformationTableView->setGeometry(QRect(240, 310, 501, 271));
        bookInformationTableView->setMinimumSize(QSize(0, 0));
        bookInformationTableView->setMaximumSize(QSize(100000, 100000));
        book1TableView = new QTableView(GuestGUIWidget);
        book1TableView->setObjectName(QStringLiteral("book1TableView"));
        book1TableView->setGeometry(QRect(240, 40, 500, 100));
        book1TableView->setMinimumSize(QSize(500, 100));
        book1TableView->setMaximumSize(QSize(500, 100));
        book2TableView = new QTableView(GuestGUIWidget);
        book2TableView->setObjectName(QStringLiteral("book2TableView"));
        book2TableView->setGeometry(QRect(240, 150, 500, 100));
        book2TableView->setMinimumSize(QSize(500, 100));
        book2TableView->setMaximumSize(QSize(500, 100));
        pushButton = new QPushButton(GuestGUIWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 120, 100, 40));
        pushButton->setMinimumSize(QSize(100, 40));
        pushButton->setMaximumSize(QSize(100, 40));
        logOffButton = new QPushButton(GuestGUIWidget);
        logOffButton->setObjectName(QStringLiteral("logOffButton"));
        logOffButton->setGeometry(QRect(130, 120, 100, 40));
        logOffButton->setMinimumSize(QSize(100, 40));
        logOffButton->setMaximumSize(QSize(100, 40));
        returnButton = new QPushButton(GuestGUIWidget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(130, 550, 100, 40));
        returnButton->setMinimumSize(QSize(100, 40));
        returnButton->setMaximumSize(QSize(100, 40));
        borrowButton = new QPushButton(GuestGUIWidget);
        borrowButton->setObjectName(QStringLiteral("borrowButton"));
        borrowButton->setGeometry(QRect(10, 550, 100, 40));
        borrowButton->setMinimumSize(QSize(100, 40));
        borrowButton->setMaximumSize(QSize(100, 40));
        searchingButton = new QPushButton(GuestGUIWidget);
        searchingButton->setObjectName(QStringLiteral("searchingButton"));
        searchingButton->setGeometry(QRect(0, 500, 235, 40));
        searchingButton->setMinimumSize(QSize(235, 40));
        searchingButton->setMaximumSize(QSize(235, 40));
        searchBookLineEdit = new QLineEdit(GuestGUIWidget);
        searchBookLineEdit->setObjectName(QStringLiteral("searchBookLineEdit"));
        searchBookLineEdit->setGeometry(QRect(10, 460, 210, 30));
        searchBookLineEdit->setMinimumSize(QSize(210, 30));
        searchBookLineEdit->setMaximumSize(QSize(210, 30));
        userInformationTableView = new QTableView(GuestGUIWidget);
        userInformationTableView->setObjectName(QStringLiteral("userInformationTableView"));
        userInformationTableView->setGeometry(QRect(10, 40, 221, 71));
        userInformationTableView->setMinimumSize(QSize(0, 0));
        userInformationTableView->setMaximumSize(QSize(23500, 10000));
        calendarWidget = new QCalendarWidget(GuestGUIWidget);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(10, 170, 211, 271));
        label_4->raise();
        exitButton->raise();
        bookInformationTableView->raise();
        book1TableView->raise();
        book2TableView->raise();
        pushButton->raise();
        logOffButton->raise();
        returnButton->raise();
        borrowButton->raise();
        searchingButton->raise();
        searchBookLineEdit->raise();
        userInformationTableView->raise();
        label->raise();
        label_2->raise();
        calendarWidget->raise();

        retranslateUi(GuestGUIWidget);

        QMetaObject::connectSlotsByName(GuestGUIWidget);
    } // setupUi

    void retranslateUi(QWidget *GuestGUIWidget)
    {
        GuestGUIWidget->setWindowTitle(QApplication::translate("GuestGUIWidget", "GuestGUIWidget", Q_NULLPTR));
        label->setText(QApplication::translate("GuestGUIWidget", "<html><head/><body><p><span style=\" font-size:16pt; font-style:italic; color:#ffff00;\">\344\270\252\344\272\272\344\277\241\346\201\257</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("GuestGUIWidget", "<html><head/><body><p><span style=\" font-size:16pt; font-style:italic; color:#ffff00;\">\344\271\246\347\261\215\344\277\241\346\201\257</span></p></body></html>", Q_NULLPTR));
        exitButton->setText(QString());
        label_4->setText(QString());
        pushButton->setText(QApplication::translate("GuestGUIWidget", "load", Q_NULLPTR));
        logOffButton->setText(QApplication::translate("GuestGUIWidget", "log off", Q_NULLPTR));
        returnButton->setText(QApplication::translate("GuestGUIWidget", "return", Q_NULLPTR));
        borrowButton->setText(QApplication::translate("GuestGUIWidget", "borrow", Q_NULLPTR));
        searchingButton->setText(QApplication::translate("GuestGUIWidget", "Searching", Q_NULLPTR));
        searchBookLineEdit->setPlaceholderText(QApplication::translate("GuestGUIWidget", "book name", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GuestGUIWidget: public Ui_GuestGUIWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUESTGUIWIDGET_H
