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
    QAction *actionCLASS;
    QAction *actionAFTERCLASS;
    QAction *actionDETAILS;
    QAction *actionABOUT;
    QAction *actionCONNECT;
    QWidget *centralwidget;
    QWidget *widget_4;
    QWidget *widget_5;
    QLCDNumber *TimeClock_Min;
    QLCDNumber *TimeClock_Hour;
    QLabel *label;
    QGroupBox *CleaningGroup;
    QGroupBox *Reminds;
    QPushButton *pushButton;
    QPushButton *BtnClassOver;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(912, 582);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionCLASS = new QAction(MainWindow);
        actionCLASS->setObjectName(QString::fromUtf8("actionCLASS"));
        actionAFTERCLASS = new QAction(MainWindow);
        actionAFTERCLASS->setObjectName(QString::fromUtf8("actionAFTERCLASS"));
        actionDETAILS = new QAction(MainWindow);
        actionDETAILS->setObjectName(QString::fromUtf8("actionDETAILS"));
        actionABOUT = new QAction(MainWindow);
        actionABOUT->setObjectName(QString::fromUtf8("actionABOUT"));
        actionCONNECT = new QAction(MainWindow);
        actionCONNECT->setObjectName(QString::fromUtf8("actionCONNECT"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(560, 10, 351, 511));
        sizePolicy1.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy1);
        widget_4->setAutoFillBackground(false);
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(10, 0, 331, 211));
        TimeClock_Min = new QLCDNumber(widget_5);
        TimeClock_Min->setObjectName(QString::fromUtf8("TimeClock_Min"));
        TimeClock_Min->setGeometry(QRect(190, 0, 141, 121));
        TimeClock_Min->setAutoFillBackground(false);
        TimeClock_Min->setDigitCount(2);
        TimeClock_Hour = new QLCDNumber(widget_5);
        TimeClock_Hour->setObjectName(QString::fromUtf8("TimeClock_Hour"));
        TimeClock_Hour->setGeometry(QRect(0, 0, 141, 121));
        TimeClock_Hour->setDigitCount(2);
        label = new QLabel(widget_5);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 10, 51, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("AcadEref"));
        font.setPointSize(48);
        label->setFont(font);
        CleaningGroup = new QGroupBox(widget_4);
        CleaningGroup->setObjectName(QString::fromUtf8("CleaningGroup"));
        CleaningGroup->setGeometry(QRect(10, 220, 331, 141));
        Reminds = new QGroupBox(widget_4);
        Reminds->setObjectName(QString::fromUtf8("Reminds"));
        Reminds->setGeometry(QRect(10, 370, 331, 91));
        pushButton = new QPushButton(widget_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 470, 93, 28));
        BtnClassOver = new QPushButton(widget_4);
        BtnClassOver->setObjectName(QString::fromUtf8("BtnClassOver"));
        BtnClassOver->setGeometry(QRect(10, 470, 93, 28));
        pushButton_2 = new QPushButton(widget_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 470, 93, 28));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 912, 26));
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
        menu->addAction(actionCLASS);
        menu->addAction(actionAFTERCLASS);
        menu->addAction(actionCONNECT);
        menu_2->addAction(actionDETAILS);
        menu_2->addAction(actionABOUT);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        actionCLASS->setText(QCoreApplication::translate("MainWindow", "\350\257\276\347\250\213\350\241\250", nullptr));
        actionAFTERCLASS->setText(QCoreApplication::translate("MainWindow", "\345\233\236\345\256\266\344\275\234\344\270\232", nullptr));
        actionDETAILS->setText(QCoreApplication::translate("MainWindow", "\345\212\237\350\203\275\350\257\264\346\230\216", nullptr));
        actionABOUT->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216..", nullptr));
        actionCONNECT->setText(QCoreApplication::translate("MainWindow", "\350\201\224\347\263\273\350\200\201\345\270\210", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
        CleaningGroup->setTitle(QCoreApplication::translate("MainWindow", "\345\200\274\346\227\245\347\224\237", nullptr));
        Reminds->setTitle(QCoreApplication::translate("MainWindow", "\346\217\220\347\244\272", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        BtnClassOver->setText(QCoreApplication::translate("MainWindow", "\350\207\252\344\271\240", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\344\270\212\350\257\276", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\345\210\207\346\215\242", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
