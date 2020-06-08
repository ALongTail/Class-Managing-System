#ifndef INFORMATION_H
#define INFORMATION_H

#include <QDialog>
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
    int a;//1 for classes, 2 for students, 3 for homework

private slots:
    void on_Btnexit_clicked();
    void on_schedule_clicked();
    void on_students_clicked();
    void on_homework_clicked();
    void on_BtnSearch_clicked();
    void on_BtnAdd_clicked();

private:
    Ui::information *ui;
};

#endif // INFORMATION_H
