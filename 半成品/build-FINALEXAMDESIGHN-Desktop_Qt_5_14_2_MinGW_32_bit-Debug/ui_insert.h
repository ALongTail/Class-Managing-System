/********************************************************************************
** Form generated from reading UI file 'insert.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERT_H
#define UI_INSERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Insert
{
public:
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Insert)
    {
        if (Insert->objectName().isEmpty())
            Insert->setObjectName(QString::fromUtf8("Insert"));
        Insert->resize(400, 610);
        label = new QLabel(Insert);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 60, 101, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        comboBox = new QComboBox(Insert);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(200, 140, 171, 22));
        label_2 = new QLabel(Insert);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 140, 91, 16));
        textEdit = new QTextEdit(Insert);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 210, 341, 291));
        pushButton = new QPushButton(Insert);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 550, 93, 28));
        pushButton_2 = new QPushButton(Insert);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 550, 93, 28));

        retranslateUi(Insert);

        QMetaObject::connectSlotsByName(Insert);
    } // setupUi

    void retranslateUi(QDialog *Insert)
    {
        Insert->setWindowTitle(QCoreApplication::translate("Insert", "\344\275\234\344\270\232", nullptr));
        label->setText(QCoreApplication::translate("Insert", "\345\233\236\345\256\266\344\275\234\344\270\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Insert", "\350\257\255\346\226\207", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Insert", "\346\225\260\345\255\246", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Insert", "\350\213\261\350\257\255", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Insert", "\347\211\251\347\220\206", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Insert", "\345\214\226\345\255\246", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("Insert", "\347\224\237\347\211\251", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("Insert", "\346\224\277\346\262\273", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("Insert", "\345\216\206\345\217\262", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("Insert", "\345\234\260\347\220\206", nullptr));

        label_2->setText(QCoreApplication::translate("Insert", "\351\200\211\346\213\251\347\247\221\347\233\256\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("Insert", "\344\270\213\344\270\200\351\227\250", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Insert", "\345\275\225\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Insert: public Ui_Insert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERT_H
