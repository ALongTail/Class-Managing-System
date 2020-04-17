/********************************************************************************
** Form generated from reading UI file 'homework.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEWORK_H
#define UI_HOMEWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Homework
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QWidget *widget_4;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QGroupBox *CleaningGroup;
    QGridLayout *gridLayout_3;
    QLabel *clean;
    QPushButton *BtnClassBegin;
    QPushButton *pushButton_2;
    QGroupBox *Reminds;
    QGridLayout *gridLayout_4;
    QLabel *remind;
    QPushButton *BtnClassOver;
    QWidget *widget_5;
    QGridLayout *gridLayout_5;
    QLCDNumber *TimeClock_Hour;
    QLCDNumber *TimeClock_Min;
    QLCDNumber *TimeClock_Sec;
    QLabel *label_date;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *homework1;
    QLabel *homework2;
    QLabel *homework3;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *homework4;
    QLabel *homework5;
    QLabel *homework6;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Homework)
    {
        if (Homework->objectName().isEmpty())
            Homework->setObjectName(QString::fromUtf8("Homework"));
        Homework->resize(900, 611);
        action = new QAction(Homework);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(Homework);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(Homework);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        centralwidget = new QWidget(Homework);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setAutoFillBackground(false);
        gridLayout = new QGridLayout(widget_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(widget_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 3, 3, 1, 1);

        CleaningGroup = new QGroupBox(widget_4);
        CleaningGroup->setObjectName(QString::fromUtf8("CleaningGroup"));
        gridLayout_3 = new QGridLayout(CleaningGroup);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        clean = new QLabel(CleaningGroup);
        clean->setObjectName(QString::fromUtf8("clean"));

        gridLayout_3->addWidget(clean, 0, 0, 1, 1);


        gridLayout->addWidget(CleaningGroup, 1, 0, 1, 4);

        BtnClassBegin = new QPushButton(widget_4);
        BtnClassBegin->setObjectName(QString::fromUtf8("BtnClassBegin"));

        gridLayout->addWidget(BtnClassBegin, 3, 1, 1, 1);

        pushButton_2 = new QPushButton(widget_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 3, 2, 1, 1);

        Reminds = new QGroupBox(widget_4);
        Reminds->setObjectName(QString::fromUtf8("Reminds"));
        gridLayout_4 = new QGridLayout(Reminds);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        remind = new QLabel(Reminds);
        remind->setObjectName(QString::fromUtf8("remind"));
        remind->setTextFormat(Qt::AutoText);

        gridLayout_4->addWidget(remind, 0, 0, 1, 1);


        gridLayout->addWidget(Reminds, 2, 0, 1, 4);

        BtnClassOver = new QPushButton(widget_4);
        BtnClassOver->setObjectName(QString::fromUtf8("BtnClassOver"));

        gridLayout->addWidget(BtnClassOver, 3, 0, 1, 1);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        gridLayout_5 = new QGridLayout(widget_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        TimeClock_Hour = new QLCDNumber(widget_5);
        TimeClock_Hour->setObjectName(QString::fromUtf8("TimeClock_Hour"));
        TimeClock_Hour->setDigitCount(2);

        gridLayout_5->addWidget(TimeClock_Hour, 0, 0, 1, 1);

        TimeClock_Min = new QLCDNumber(widget_5);
        TimeClock_Min->setObjectName(QString::fromUtf8("TimeClock_Min"));
        TimeClock_Min->setAutoFillBackground(false);
        TimeClock_Min->setDigitCount(2);

        gridLayout_5->addWidget(TimeClock_Min, 0, 1, 1, 1);

        TimeClock_Sec = new QLCDNumber(widget_5);
        TimeClock_Sec->setObjectName(QString::fromUtf8("TimeClock_Sec"));
        TimeClock_Sec->setDigitCount(2);

        gridLayout_5->addWidget(TimeClock_Sec, 0, 2, 1, 1);

        label_date = new QLabel(widget_5);
        label_date->setObjectName(QString::fromUtf8("label_date"));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font.setPointSize(14);
        label_date->setFont(font);
        label_date->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_date, 1, 0, 1, 3);


        gridLayout->addWidget(widget_5, 0, 0, 1, 4);


        gridLayout_2->addWidget(widget_4, 0, 0, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        homework1 = new QLabel(widget);
        homework1->setObjectName(QString::fromUtf8("homework1"));

        verticalLayout->addWidget(homework1);

        homework2 = new QLabel(widget);
        homework2->setObjectName(QString::fromUtf8("homework2"));

        verticalLayout->addWidget(homework2);

        homework3 = new QLabel(widget);
        homework3->setObjectName(QString::fromUtf8("homework3"));

        verticalLayout->addWidget(homework3);


        gridLayout_2->addWidget(widget, 0, 1, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        homework4 = new QLabel(widget_2);
        homework4->setObjectName(QString::fromUtf8("homework4"));

        verticalLayout_2->addWidget(homework4);

        homework5 = new QLabel(widget_2);
        homework5->setObjectName(QString::fromUtf8("homework5"));

        verticalLayout_2->addWidget(homework5);

        homework6 = new QLabel(widget_2);
        homework6->setObjectName(QString::fromUtf8("homework6"));

        verticalLayout_2->addWidget(homework6);


        gridLayout_2->addWidget(widget_2, 0, 2, 1, 1);

        Homework->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Homework);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        Homework->setMenuBar(menubar);
        statusbar = new QStatusBar(Homework);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Homework->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action);
        menu_2->addAction(action_2);
        menu_2->addAction(action_3);

        retranslateUi(Homework);

        QMetaObject::connectSlotsByName(Homework);
    } // setupUi

    void retranslateUi(QMainWindow *Homework)
    {
        Homework->setWindowTitle(QCoreApplication::translate("Homework", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("Homework", "\350\201\224\347\263\273\350\200\201\345\270\210", nullptr));
        action_2->setText(QCoreApplication::translate("Homework", "\345\212\237\350\203\275\350\257\264\346\230\216", nullptr));
        action_3->setText(QCoreApplication::translate("Homework", "\345\205\263\344\272\216..", nullptr));
        pushButton->setText(QCoreApplication::translate("Homework", "\351\200\200\345\207\272", nullptr));
        CleaningGroup->setTitle(QCoreApplication::translate("Homework", "\345\200\274\346\227\245\347\224\237", nullptr));
        clean->setText(QString());
        BtnClassBegin->setText(QCoreApplication::translate("Homework", "\344\270\212\350\257\276", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Homework", "\345\275\225\345\205\245\344\275\234\344\270\232", nullptr));
        Reminds->setTitle(QCoreApplication::translate("Homework", "\346\217\220\347\244\272", nullptr));
        remind->setText(QString());
        BtnClassOver->setText(QCoreApplication::translate("Homework", "\350\207\252\344\271\240", nullptr));
        label_date->setText(QCoreApplication::translate("Homework", "0000\345\271\26400\346\234\21000\346\227\245", nullptr));
        homework1->setText(QCoreApplication::translate("Homework", "TextLabel", nullptr));
        homework2->setText(QCoreApplication::translate("Homework", "TextLabel", nullptr));
        homework3->setText(QCoreApplication::translate("Homework", "TextLabel", nullptr));
        homework4->setText(QCoreApplication::translate("Homework", "TextLabel", nullptr));
        homework5->setText(QCoreApplication::translate("Homework", "TextLabel", nullptr));
        homework6->setText(QCoreApplication::translate("Homework", "TextLabel", nullptr));
        menu->setTitle(QCoreApplication::translate("Homework", "\345\210\207\346\215\242", nullptr));
        menu_2->setTitle(QCoreApplication::translate("Homework", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Homework: public Ui_Homework {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEWORK_H
