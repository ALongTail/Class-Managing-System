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
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_homework
{
public:
    QLabel *label_2;
    QComboBox *ClassSwitch;
    QLabel *label;
    QTextEdit *textEdit;
    QPushButton *BtnNext;
    QPushButton *BtnInsert;

    void setupUi(QDialog *homework)
    {
        if (homework->objectName().isEmpty())
            homework->setObjectName(QString::fromUtf8("homework"));
        homework->resize(429, 642);
        label_2 = new QLabel(homework);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 150, 91, 16));
        ClassSwitch = new QComboBox(homework);
        ClassSwitch->addItem(QString());
        ClassSwitch->addItem(QString());
        ClassSwitch->addItem(QString());
        ClassSwitch->addItem(QString());
        ClassSwitch->addItem(QString());
        ClassSwitch->addItem(QString());
        ClassSwitch->addItem(QString());
        ClassSwitch->addItem(QString());
        ClassSwitch->addItem(QString());
        ClassSwitch->setObjectName(QString::fromUtf8("ClassSwitch"));
        ClassSwitch->setGeometry(QRect(220, 150, 171, 22));
        label = new QLabel(homework);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 70, 101, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        textEdit = new QTextEdit(homework);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(50, 220, 341, 291));
        BtnNext = new QPushButton(homework);
        BtnNext->setObjectName(QString::fromUtf8("BtnNext"));
        BtnNext->setGeometry(QRect(190, 560, 93, 28));
        BtnInsert = new QPushButton(homework);
        BtnInsert->setObjectName(QString::fromUtf8("BtnInsert"));
        BtnInsert->setGeometry(QRect(300, 560, 93, 28));

        retranslateUi(homework);

        QMetaObject::connectSlotsByName(homework);
    } // setupUi

    void retranslateUi(QDialog *homework)
    {
        homework->setWindowTitle(QCoreApplication::translate("homework", "\345\233\236\345\256\266\344\275\234\344\270\232", nullptr));
        label_2->setText(QCoreApplication::translate("homework", "\351\200\211\346\213\251\347\247\221\347\233\256\357\274\232", nullptr));
        ClassSwitch->setItemText(0, QCoreApplication::translate("homework", "\350\257\255\346\226\207", nullptr));
        ClassSwitch->setItemText(1, QCoreApplication::translate("homework", "\346\225\260\345\255\246", nullptr));
        ClassSwitch->setItemText(2, QCoreApplication::translate("homework", "\350\213\261\350\257\255", nullptr));
        ClassSwitch->setItemText(3, QCoreApplication::translate("homework", "\347\211\251\347\220\206", nullptr));
        ClassSwitch->setItemText(4, QCoreApplication::translate("homework", "\345\214\226\345\255\246", nullptr));
        ClassSwitch->setItemText(5, QCoreApplication::translate("homework", "\347\224\237\347\211\251", nullptr));
        ClassSwitch->setItemText(6, QCoreApplication::translate("homework", "\346\224\277\346\262\273", nullptr));
        ClassSwitch->setItemText(7, QCoreApplication::translate("homework", "\345\216\206\345\217\262", nullptr));
        ClassSwitch->setItemText(8, QCoreApplication::translate("homework", "\345\234\260\347\220\206", nullptr));

        label->setText(QCoreApplication::translate("homework", "\345\233\236\345\256\266\344\275\234\344\270\232", nullptr));
        BtnNext->setText(QCoreApplication::translate("homework", "\344\270\213\344\270\200\351\227\250", nullptr));
        BtnInsert->setText(QCoreApplication::translate("homework", "\345\275\225\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class homework: public Ui_homework {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEWORK_H
