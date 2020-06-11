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
    QTextEdit *textEdit_2;
    QPushButton *pushButton;
    QPushButton *BtnSearch;
    QTextEdit *textEdit;
    QLabel *label;
    QPushButton *BtnAdd;
    QPushButton *BtnCancel;
    QLabel *label_2;
    QPushButton *homework;
    QPushButton *BtnEdit;
    QTableWidget *tableWidget;
    QPushButton *BtnDrop;

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
        schedule->setGeometry(QRect(20, 630, 93, 28));
        schedule->setCursor(QCursor(Qt::PointingHandCursor));
        students = new QPushButton(information);
        students->setObjectName(QString::fromUtf8("students"));
        students->setGeometry(QRect(140, 630, 93, 28));
        students->setCursor(QCursor(Qt::PointingHandCursor));
        Btnexit = new QPushButton(information);
        Btnexit->setObjectName(QString::fromUtf8("Btnexit"));
        Btnexit->setGeometry(QRect(792, 630, 91, 28));
        Btnexit->setCursor(QCursor(Qt::PointingHandCursor));
        widget_2 = new QWidget(information);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(11, 88, 877, 50));
        widget_2->setMaximumSize(QSize(16777215, 50));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textEdit_2 = new QTextEdit(widget_2);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        gridLayout_2->addWidget(textEdit_2, 0, 6, 1, 1);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(pushButton, 0, 8, 1, 1);

        BtnSearch = new QPushButton(widget_2);
        BtnSearch->setObjectName(QString::fromUtf8("BtnSearch"));
        BtnSearch->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(BtnSearch, 0, 3, 1, 1);

        textEdit = new QTextEdit(widget_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout_2->addWidget(textEdit, 0, 1, 1, 1);

        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        BtnAdd = new QPushButton(widget_2);
        BtnAdd->setObjectName(QString::fromUtf8("BtnAdd"));
        BtnAdd->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(BtnAdd, 0, 7, 1, 1);

        BtnCancel = new QPushButton(widget_2);
        BtnCancel->setObjectName(QString::fromUtf8("BtnCancel"));
        BtnCancel->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(BtnCancel, 0, 4, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 5, 1, 1);

        homework = new QPushButton(information);
        homework->setObjectName(QString::fromUtf8("homework"));
        homework->setGeometry(QRect(260, 630, 93, 28));
        homework->setCursor(QCursor(Qt::PointingHandCursor));
        BtnEdit = new QPushButton(information);
        BtnEdit->setObjectName(QString::fromUtf8("BtnEdit"));
        BtnEdit->setGeometry(QRect(670, 630, 93, 28));
        BtnEdit->setCursor(QCursor(Qt::PointingHandCursor));
        tableWidget = new QTableWidget(information);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 160, 861, 441));
        BtnDrop = new QPushButton(information);
        BtnDrop->setObjectName(QString::fromUtf8("BtnDrop"));
        BtnDrop->setGeometry(QRect(550, 630, 91, 28));
        BtnDrop->setCursor(QCursor(Qt::PointingHandCursor));

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
        Btnexit->setText(QCoreApplication::translate("information", "\351\200\200\345\207\272/\346\224\276\345\274\203", nullptr));
        pushButton->setText(QCoreApplication::translate("information", "\345\217\226\346\266\210", nullptr));
        BtnSearch->setText(QCoreApplication::translate("information", "GO", nullptr));
        label->setText(QCoreApplication::translate("information", "\346\237\245\346\211\276\357\274\232", nullptr));
        BtnAdd->setText(QCoreApplication::translate("information", "GO", nullptr));
        BtnCancel->setText(QCoreApplication::translate("information", "\345\217\226\346\266\210", nullptr));
        label_2->setText(QCoreApplication::translate("information", "\346\267\273\345\212\240\357\274\232", nullptr));
        homework->setText(QCoreApplication::translate("information", "\344\275\234\344\270\232", nullptr));
        BtnEdit->setText(QCoreApplication::translate("information", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        BtnDrop->setText(QCoreApplication::translate("information", "\345\210\240\351\231\244\351\200\211\344\270\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class information: public Ui_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
