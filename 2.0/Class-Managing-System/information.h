#ifndef INFORMATION_H
#define INFORMATION_H

#include <QDialog>
#include <QList>
#include <QStandardItem>
#include <QStandardItemModel>
#include "dbconnect.h"

namespace Ui {
class information;
}

class information : public QDialog
{
    Q_OBJECT

public:
    explicit information(QWidget *parent = nullptr);
    ~information();
    void display();
    QString Tab;
    int imax=0,jmax=0;

private slots:
    void on_Btnexit_clicked();
    void on_schedule_clicked();
    void on_students_clicked();
    void on_homework_clicked();
    void on_BtnSearch_clicked();
    void on_BtnAdd_clicked();
    void on_BtnEdit_clicked();
    void on_pushButton_clicked();
    void on_BtnCancel_clicked();
    void on_BtnDrop_clicked();

private:
    Ui::information *ui;
    int a=1;//1 for classes, 2 for students, 3 for homework
    bool CLICKED=false;
};

#endif // INFORMATION_H
