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
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTableView *userInformationTableView;
    QTableView *bookInformationTableView;
    QHBoxLayout *horizontalLayout;
    QLineEdit *searchBookLineEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *searchingButton;
    QPushButton *borrowButton;
    QPushButton *returnButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *logOffButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *exitButton;

    void setupUi(QWidget *GuestGUIWidget)
    {
        if (GuestGUIWidget->objectName().isEmpty())
            GuestGUIWidget->setObjectName(QStringLiteral("GuestGUIWidget"));
        GuestGUIWidget->resize(537, 452);
        widget = new QWidget(GuestGUIWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 502, 436));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        userInformationTableView = new QTableView(widget);
        userInformationTableView->setObjectName(QStringLiteral("userInformationTableView"));
        userInformationTableView->setMinimumSize(QSize(500, 80));
        userInformationTableView->setMaximumSize(QSize(500, 80));

        verticalLayout->addWidget(userInformationTableView);

        bookInformationTableView = new QTableView(widget);
        bookInformationTableView->setObjectName(QStringLiteral("bookInformationTableView"));
        bookInformationTableView->setMinimumSize(QSize(500, 200));
        bookInformationTableView->setMaximumSize(QSize(500, 200));

        verticalLayout->addWidget(bookInformationTableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        searchBookLineEdit = new QLineEdit(widget);
        searchBookLineEdit->setObjectName(QStringLiteral("searchBookLineEdit"));
        searchBookLineEdit->setMinimumSize(QSize(200, 30));
        searchBookLineEdit->setMaximumSize(QSize(200, 30));

        horizontalLayout->addWidget(searchBookLineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        searchingButton = new QPushButton(widget);
        searchingButton->setObjectName(QStringLiteral("searchingButton"));
        searchingButton->setMinimumSize(QSize(70, 30));
        searchingButton->setMaximumSize(QSize(70, 30));

        horizontalLayout->addWidget(searchingButton);

        borrowButton = new QPushButton(widget);
        borrowButton->setObjectName(QStringLiteral("borrowButton"));
        borrowButton->setMinimumSize(QSize(70, 30));
        borrowButton->setMaximumSize(QSize(70, 30));

        horizontalLayout->addWidget(borrowButton);

        returnButton = new QPushButton(widget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setMinimumSize(QSize(70, 30));
        returnButton->setMaximumSize(QSize(70, 30));

        horizontalLayout->addWidget(returnButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        logOffButton = new QPushButton(widget);
        logOffButton->setObjectName(QStringLiteral("logOffButton"));
        logOffButton->setMinimumSize(QSize(70, 30));
        logOffButton->setMaximumSize(QSize(70, 30));

        horizontalLayout_2->addWidget(logOffButton);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        exitButton = new QPushButton(widget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setMinimumSize(QSize(70, 30));
        exitButton->setMaximumSize(QSize(70, 30));

        horizontalLayout_2->addWidget(exitButton);


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
