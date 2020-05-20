#ifndef HOMEWORK_H
#define HOMEWORK_H

#include <QMainWindow>
#include "insert.h"
#include "mainwindow.h"
#include "schedule.h"
#include "dbconnect.h"
#include <QMenuBar>

namespace Ui {
class Homework;
}

class Homework : public QMainWindow
{
    Q_OBJECT

public:
    explicit Homework(QWidget *parent = nullptr);
    ~Homework();

public slots:
    void timerUpdate(void);
    void IsChange(void);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_BtnClassOver_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Homework *ui;
};

#endif // HOMEWORK_H
