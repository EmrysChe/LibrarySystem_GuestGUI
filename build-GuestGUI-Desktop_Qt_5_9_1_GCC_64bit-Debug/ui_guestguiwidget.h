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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuestGUIWidget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_11;
    QTableView *userInformationTableView;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_8;
    QTableView *book1TableView;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QTableView *book2TableView;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QTableView *bookInformationTableView;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_14;
    QLineEdit *searchBookLineEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *searchingButton;
    QPushButton *borrowButton;
    QPushButton *returnButton;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *logOffButton;
    QPushButton *exitButton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *GuestGUIWidget)
    {
        if (GuestGUIWidget->objectName().isEmpty())
            GuestGUIWidget->setObjectName(QStringLiteral("GuestGUIWidget"));
        GuestGUIWidget->resize(548, 630);
        layoutWidget = new QWidget(GuestGUIWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 531, 611));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_11 = new QSpacerItem(15, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        userInformationTableView = new QTableView(layoutWidget);
        userInformationTableView->setObjectName(QStringLiteral("userInformationTableView"));
        userInformationTableView->setMinimumSize(QSize(220, 100));
        userInformationTableView->setMaximumSize(QSize(220, 100));

        horizontalLayout_6->addWidget(userInformationTableView);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        book1TableView = new QTableView(layoutWidget);
        book1TableView->setObjectName(QStringLiteral("book1TableView"));
        book1TableView->setMinimumSize(QSize(500, 100));
        book1TableView->setMaximumSize(QSize(500, 100));

        horizontalLayout_3->addWidget(book1TableView);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        book2TableView = new QTableView(layoutWidget);
        book2TableView->setObjectName(QStringLiteral("book2TableView"));
        book2TableView->setMinimumSize(QSize(500, 100));
        book2TableView->setMaximumSize(QSize(500, 100));

        horizontalLayout_5->addWidget(book2TableView);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        bookInformationTableView = new QTableView(layoutWidget);
        bookInformationTableView->setObjectName(QStringLiteral("bookInformationTableView"));
        bookInformationTableView->setMinimumSize(QSize(510, 200));
        bookInformationTableView->setMaximumSize(QSize(510, 200));

        horizontalLayout_4->addWidget(bookInformationTableView);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_13 = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_13);

        horizontalSpacer_14 = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_14);

        searchBookLineEdit = new QLineEdit(layoutWidget);
        searchBookLineEdit->setObjectName(QStringLiteral("searchBookLineEdit"));
        searchBookLineEdit->setMinimumSize(QSize(200, 30));
        searchBookLineEdit->setMaximumSize(QSize(200, 30));

        horizontalLayout->addWidget(searchBookLineEdit);

        horizontalSpacer = new QSpacerItem(65, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        searchingButton = new QPushButton(layoutWidget);
        searchingButton->setObjectName(QStringLiteral("searchingButton"));
        searchingButton->setMinimumSize(QSize(70, 30));
        searchingButton->setMaximumSize(QSize(70, 30));

        horizontalLayout->addWidget(searchingButton);

        borrowButton = new QPushButton(layoutWidget);
        borrowButton->setObjectName(QStringLiteral("borrowButton"));
        borrowButton->setMinimumSize(QSize(70, 30));
        borrowButton->setMaximumSize(QSize(70, 30));

        horizontalLayout->addWidget(borrowButton);

        returnButton = new QPushButton(layoutWidget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setMinimumSize(QSize(70, 30));
        returnButton->setMaximumSize(QSize(70, 30));

        horizontalLayout->addWidget(returnButton);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        logOffButton = new QPushButton(layoutWidget);
        logOffButton->setObjectName(QStringLiteral("logOffButton"));
        logOffButton->setMinimumSize(QSize(70, 30));
        logOffButton->setMaximumSize(QSize(70, 30));

        horizontalLayout_2->addWidget(logOffButton);

        exitButton = new QPushButton(layoutWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setMinimumSize(QSize(70, 30));
        exitButton->setMaximumSize(QSize(70, 30));

        horizontalLayout_2->addWidget(exitButton);

        horizontalSpacer_3 = new QSpacerItem(35, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(GuestGUIWidget);

        QMetaObject::connectSlotsByName(GuestGUIWidget);
    } // setupUi

    void retranslateUi(QWidget *GuestGUIWidget)
    {
        GuestGUIWidget->setWindowTitle(QApplication::translate("GuestGUIWidget", "GuestGUIWidget", Q_NULLPTR));
        searchBookLineEdit->setPlaceholderText(QApplication::translate("GuestGUIWidget", "book name", Q_NULLPTR));
        searchingButton->setText(QApplication::translate("GuestGUIWidget", "Searching", Q_NULLPTR));
        borrowButton->setText(QApplication::translate("GuestGUIWidget", "borrow", Q_NULLPTR));
        returnButton->setText(QApplication::translate("GuestGUIWidget", "return", Q_NULLPTR));
        logOffButton->setText(QApplication::translate("GuestGUIWidget", "log off", Q_NULLPTR));
        exitButton->setText(QApplication::translate("GuestGUIWidget", "exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GuestGUIWidget: public Ui_GuestGUIWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUESTGUIWIDGET_H
