/********************************************************************************
** Form generated from reading UI file 'information.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_information
{
public:
    QLabel *lbTitle;
    QPushButton *schedule;
    QPushButton *students;
    QPushButton *Btnexit;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QPushButton *BtnSearch;
    QTextEdit *textEdit;
    QPushButton *BtnAdd;
    QLabel *label_2;
    QTextEdit *textEdit_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *homework;
    QPushButton *BtnEdit;
    QTableWidget *tableWidget;

    void setupUi(QDialog *information)
    {
        if (information->objectName().isEmpty())
            information->setObjectName(QString::fromUtf8("information"));
        information->resize(896, 688);
        lbTitle = new QLabel(information);
        lbTitle->setObjectName(QString::fromUtf8("lbTitle"));
        lbTitle->setGeometry(QRect(15, 10, 871, 70));
        QFont font;
        font.setFamily(QString::fromUtf8("Cambria Math"));
        font.setPointSize(18);
        lbTitle->setFont(font);
        lbTitle->setAlignment(Qt::AlignCenter);
        schedule = new QPushButton(information);
        schedule->setObjectName(QString::fromUtf8("schedule"));
        schedule->setGeometry(QRect(40, 630, 93, 28));
        schedule->setCursor(QCursor(Qt::PointingHandCursor));
        students = new QPushButton(information);
        students->setObjectName(QString::fromUtf8("students"));
        students->setGeometry(QRect(190, 630, 93, 28));
        students->setCursor(QCursor(Qt::PointingHandCursor));
        Btnexit = new QPushButton(information);
        Btnexit->setObjectName(QString::fromUtf8("Btnexit"));
        Btnexit->setGeometry(QRect(770, 630, 93, 28));
        Btnexit->setCursor(QCursor(Qt::PointingHandCursor));
        widget_2 = new QWidget(information);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(11, 88, 877, 50));
        widget_2->setMaximumSize(QSize(16777215, 50));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 5, 1, 1);

        BtnSearch = new QPushButton(widget_2);
        BtnSearch->setObjectName(QString::fromUtf8("BtnSearch"));
        BtnSearch->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(BtnSearch, 0, 3, 1, 1);

        textEdit = new QTextEdit(widget_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout_2->addWidget(textEdit, 0, 1, 1, 1);

        BtnAdd = new QPushButton(widget_2);
        BtnAdd->setObjectName(QString::fromUtf8("BtnAdd"));
        BtnAdd->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(BtnAdd, 0, 7, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font1.setPointSize(10);
        label_2->setFont(font1);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        textEdit_2 = new QTextEdit(widget_2);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        gridLayout_2->addWidget(textEdit_2, 0, 6, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        homework = new QPushButton(information);
        homework->setObjectName(QString::fromUtf8("homework"));
        homework->setGeometry(QRect(340, 630, 93, 28));
        homework->setCursor(QCursor(Qt::PointingHandCursor));
        BtnEdit = new QPushButton(information);
        BtnEdit->setObjectName(QString::fromUtf8("BtnEdit"));
        BtnEdit->setGeometry(QRect(640, 630, 93, 28));
        tableWidget = new QTableWidget(information);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 160, 861, 441));

        retranslateUi(information);

        QMetaObject::connectSlotsByName(information);
    } // setupUi

    void retranslateUi(QDialog *information)
    {
        information->setWindowTitle(QCoreApplication::translate("information", "\346\237\245\347\234\213/\344\277\256\346\224\271\344\277\241\346\201\257", nullptr));
#if QT_CONFIG(whatsthis)
        information->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        lbTitle->setText(QCoreApplication::translate("information", "\350\257\276 \347\250\213 \350\241\250", nullptr));
        schedule->setText(QCoreApplication::translate("information", "\350\257\276\347\250\213\350\241\250", nullptr));
        students->setText(QCoreApplication::translate("information", "\345\255\246\347\224\237", nullptr));
        Btnexit->setText(QCoreApplication::translate("information", "\351\200\200\345\207\272", nullptr));
        label_3->setText(QCoreApplication::translate("information", "ADD\357\274\232", nullptr));
        BtnSearch->setText(QCoreApplication::translate("information", "GO", nullptr));
        BtnAdd->setText(QCoreApplication::translate("information", "GO", nullptr));
        label_2->setText(QCoreApplication::translate("information", "\346\237\245\346\211\276\357\274\232", nullptr));
        homework->setText(QCoreApplication::translate("information", "\344\275\234\344\270\232", nullptr));
        BtnEdit->setText(QCoreApplication::translate("information", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class information: public Ui_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
