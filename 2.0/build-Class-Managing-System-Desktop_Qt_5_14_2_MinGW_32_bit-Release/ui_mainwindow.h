/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QWidget *centralwidget;
    QGridLayout *gridLayout_6;
    QWidget *widget_4;
    QGridLayout *gridLayout;
    QPushButton *BtnInfo;
    QPushButton *BtnExit;
    QPushButton *BtnHWork;
    QGroupBox *CleaningGroup;
    QGridLayout *gridLayout_3;
    QLabel *clean;
    QGroupBox *Reminds;
    QGridLayout *gridLayout_4;
    QLabel *remind;
    QWidget *widget_5;
    QGridLayout *gridLayout_5;
    QLCDNumber *TimeClock_Hour;
    QLCDNumber *TimeClock_Min;
    QLCDNumber *TimeClock_Sec;
    QLabel *label_date;
    QPushButton *BtnSwitch;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QLabel *lbleft;
    QLabel *lbright;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(908, 670);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_6 = new QGridLayout(centralwidget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
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
        BtnInfo = new QPushButton(widget_4);
        BtnInfo->setObjectName(QString::fromUtf8("BtnInfo"));
        BtnInfo->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(BtnInfo, 3, 2, 1, 1);

        BtnExit = new QPushButton(widget_4);
        BtnExit->setObjectName(QString::fromUtf8("BtnExit"));
        BtnExit->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(BtnExit, 3, 3, 1, 1);

        BtnHWork = new QPushButton(widget_4);
        BtnHWork->setObjectName(QString::fromUtf8("BtnHWork"));
        BtnHWork->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(BtnHWork, 3, 1, 1, 1);

        CleaningGroup = new QGroupBox(widget_4);
        CleaningGroup->setObjectName(QString::fromUtf8("CleaningGroup"));
        gridLayout_3 = new QGridLayout(CleaningGroup);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        clean = new QLabel(CleaningGroup);
        clean->setObjectName(QString::fromUtf8("clean"));
        QFont font;
        font.setPointSize(8);
        clean->setFont(font);

        gridLayout_3->addWidget(clean, 0, 0, 1, 1);


        gridLayout->addWidget(CleaningGroup, 1, 0, 1, 4);

        Reminds = new QGroupBox(widget_4);
        Reminds->setObjectName(QString::fromUtf8("Reminds"));
        gridLayout_4 = new QGridLayout(Reminds);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        remind = new QLabel(Reminds);
        remind->setObjectName(QString::fromUtf8("remind"));
        remind->setTextFormat(Qt::AutoText);

        gridLayout_4->addWidget(remind, 0, 0, 1, 1);


        gridLayout->addWidget(Reminds, 2, 0, 1, 4);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        gridLayout_5 = new QGridLayout(widget_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        TimeClock_Hour = new QLCDNumber(widget_5);
        TimeClock_Hour->setObjectName(QString::fromUtf8("TimeClock_Hour"));
        TimeClock_Hour->setDigitCount(2);
        TimeClock_Hour->setProperty("intValue", QVariant(0));

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
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font1.setPointSize(14);
        label_date->setFont(font1);
        label_date->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_date, 1, 0, 1, 3);


        gridLayout->addWidget(widget_5, 0, 0, 1, 4);

        BtnSwitch = new QPushButton(widget_4);
        BtnSwitch->setObjectName(QString::fromUtf8("BtnSwitch"));

        gridLayout->addWidget(BtnSwitch, 3, 0, 1, 1);


        gridLayout_6->addWidget(widget_4, 0, 0, 1, 1);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lbleft = new QLabel(widget_3);
        lbleft->setObjectName(QString::fromUtf8("lbleft"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Bahnschrift Light"));
        font2.setPointSize(16);
        lbleft->setFont(font2);
        lbleft->setWordWrap(true);

        gridLayout_2->addWidget(lbleft, 0, 0, 1, 1);

        lbright = new QLabel(widget_3);
        lbright->setObjectName(QString::fromUtf8("lbright"));
        lbright->setFont(font2);
        lbright->setWordWrap(true);

        gridLayout_2->addWidget(lbright, 0, 1, 1, 1);


        gridLayout_6->addWidget(widget_3, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 908, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\345\212\237\350\203\275\350\257\264\346\230\216", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216..", nullptr));
        BtnInfo->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213/\344\277\256\346\224\271\344\277\241\346\201\257", nullptr));
        BtnExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        BtnHWork->setText(QCoreApplication::translate("MainWindow", "\344\275\234\344\270\232\345\275\225\345\205\245", nullptr));
        CleaningGroup->setTitle(QCoreApplication::translate("MainWindow", "\345\200\274\346\227\245\347\224\237", nullptr));
        clean->setText(QString());
        Reminds->setTitle(QCoreApplication::translate("MainWindow", "\346\217\220\347\244\272", nullptr));
        remind->setText(QString());
        label_date->setText(QCoreApplication::translate("MainWindow", "0000\345\271\26400\346\234\21000\346\227\245", nullptr));
        BtnSwitch->setText(QCoreApplication::translate("MainWindow", "\350\207\252\344\271\240", nullptr));
        lbleft->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lbright->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
