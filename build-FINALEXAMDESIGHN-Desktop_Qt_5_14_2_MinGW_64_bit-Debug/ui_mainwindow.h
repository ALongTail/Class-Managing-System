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
#include <QtWidgets/QFrame>
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
    QAction *actionDETAILS;
    QAction *actionABOUT;
    QAction *action;
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QWidget *widget_4;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QGroupBox *CleaningGroup;
    QLabel *clean;
    QPushButton *BtnClassBegin;
    QPushButton *pushButton_2;
    QGroupBox *Reminds;
    QLabel *remind;
    QPushButton *BtnClassOver;
    QWidget *widget_5;
    QGridLayout *gridLayout_5;
    QLCDNumber *TimeClock_Hour;
    QLCDNumber *TimeClock_Min;
    QLCDNumber *TimeClock_Sec;
    QLabel *label_date;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *time5;
    QLabel *time2;
    QLabel *time4;
    QLabel *time8;
    QLabel *time6;
    QLabel *time1;
    QLabel *time3;
    QLabel *time7;
    QFrame *line;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QLabel *class7;
    QLabel *class4;
    QLabel *class3;
    QLabel *class1;
    QLabel *class2;
    QLabel *class5;
    QLabel *class8;
    QLabel *class6;
    QFrame *line_2;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(968, 628);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionDETAILS = new QAction(MainWindow);
        actionDETAILS->setObjectName(QString::fromUtf8("actionDETAILS"));
        actionABOUT = new QAction(MainWindow);
        actionABOUT->setObjectName(QString::fromUtf8("actionABOUT"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy2);
        widget_4->setAutoFillBackground(false);
        gridLayout = new QGridLayout(widget_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(widget_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 3, 3, 1, 1);

        CleaningGroup = new QGroupBox(widget_4);
        CleaningGroup->setObjectName(QString::fromUtf8("CleaningGroup"));
        clean = new QLabel(CleaningGroup);
        clean->setObjectName(QString::fromUtf8("clean"));
        clean->setGeometry(QRect(10, 20, 371, 131));

        gridLayout->addWidget(CleaningGroup, 1, 0, 1, 4);

        BtnClassBegin = new QPushButton(widget_4);
        BtnClassBegin->setObjectName(QString::fromUtf8("BtnClassBegin"));

        gridLayout->addWidget(BtnClassBegin, 3, 1, 1, 1);

        pushButton_2 = new QPushButton(widget_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 3, 2, 1, 1);

        Reminds = new QGroupBox(widget_4);
        Reminds->setObjectName(QString::fromUtf8("Reminds"));
        remind = new QLabel(Reminds);
        remind->setObjectName(QString::fromUtf8("remind"));
        remind->setGeometry(QRect(10, 20, 371, 131));
        remind->setTextFormat(Qt::AutoText);

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


        gridLayout_4->addWidget(widget_4, 0, 0, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        time5 = new QLabel(widget);
        time5->setObjectName(QString::fromUtf8("time5"));
        time5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(time5, 5, 0, 1, 1);

        time2 = new QLabel(widget);
        time2->setObjectName(QString::fromUtf8("time2"));
        time2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(time2, 1, 0, 1, 1);

        time4 = new QLabel(widget);
        time4->setObjectName(QString::fromUtf8("time4"));
        time4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(time4, 3, 0, 1, 1);

        time8 = new QLabel(widget);
        time8->setObjectName(QString::fromUtf8("time8"));
        time8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(time8, 8, 0, 1, 1);

        time6 = new QLabel(widget);
        time6->setObjectName(QString::fromUtf8("time6"));
        time6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(time6, 6, 0, 1, 1);

        time1 = new QLabel(widget);
        time1->setObjectName(QString::fromUtf8("time1"));
        time1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(time1, 0, 0, 1, 1);

        time3 = new QLabel(widget);
        time3->setObjectName(QString::fromUtf8("time3"));
        time3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(time3, 2, 0, 1, 1);

        time7 = new QLabel(widget);
        time7->setObjectName(QString::fromUtf8("time7"));
        time7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(time7, 7, 0, 1, 1);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 4, 0, 1, 1);


        gridLayout_4->addWidget(widget, 0, 1, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        class7 = new QLabel(widget_2);
        class7->setObjectName(QString::fromUtf8("class7"));
        class7->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(class7, 7, 0, 1, 1);

        class4 = new QLabel(widget_2);
        class4->setObjectName(QString::fromUtf8("class4"));
        class4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(class4, 3, 0, 1, 1);

        class3 = new QLabel(widget_2);
        class3->setObjectName(QString::fromUtf8("class3"));
        class3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(class3, 2, 0, 1, 1);

        class1 = new QLabel(widget_2);
        class1->setObjectName(QString::fromUtf8("class1"));
        class1->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(class1, 0, 0, 1, 1);

        class2 = new QLabel(widget_2);
        class2->setObjectName(QString::fromUtf8("class2"));
        class2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(class2, 1, 0, 1, 1);

        class5 = new QLabel(widget_2);
        class5->setObjectName(QString::fromUtf8("class5"));
        class5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(class5, 5, 0, 1, 1);

        class8 = new QLabel(widget_2);
        class8->setObjectName(QString::fromUtf8("class8"));
        class8->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(class8, 8, 0, 1, 1);

        class6 = new QLabel(widget_2);
        class6->setObjectName(QString::fromUtf8("class6"));
        class6->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(class6, 6, 0, 1, 1);

        line_2 = new QFrame(widget_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_2, 4, 0, 1, 1);


        gridLayout_4->addWidget(widget_2, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 968, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action);
        menu_2->addAction(actionDETAILS);
        menu_2->addAction(actionABOUT);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        actionDETAILS->setText(QCoreApplication::translate("MainWindow", "\345\212\237\350\203\275\350\257\264\346\230\216", nullptr));
        actionABOUT->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216..", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\350\201\224\347\263\273\350\200\201\345\270\210", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        CleaningGroup->setTitle(QCoreApplication::translate("MainWindow", "\345\200\274\346\227\245\347\224\237", nullptr));
        clean->setText(QString());
        BtnClassBegin->setText(QCoreApplication::translate("MainWindow", "\344\270\212\350\257\276", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\345\275\225\345\205\245\344\275\234\344\270\232", nullptr));
        Reminds->setTitle(QCoreApplication::translate("MainWindow", "\346\217\220\347\244\272", nullptr));
        remind->setText(QString());
        BtnClassOver->setText(QCoreApplication::translate("MainWindow", "\350\207\252\344\271\240", nullptr));
        label_date->setText(QCoreApplication::translate("MainWindow", "0000\345\271\26400\346\234\21000\346\227\245", nullptr));
        time5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        time2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        time4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        time8->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        time6->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        time1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        time3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        time7->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        class7->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        class4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        class3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        class1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        class2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        class5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        class8->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        class6->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\345\210\207\346\215\242", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
