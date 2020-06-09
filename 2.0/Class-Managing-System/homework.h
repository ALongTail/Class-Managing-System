#ifndef HOMEWORK_H
#define HOMEWORK_H

#include <QDialog>
#include <QDateTime>
#include "dbconnect.h"

namespace Ui {
class homework;
}

class homework : public QDialog
{
    Q_OBJECT

public:
    explicit homework(QWidget *parent = nullptr);
    ~homework();
    QString bon[11];

private slots:
    void on_BtnNext_clicked();
    void on_BtnInsert_clicked();
    void on_ClassSwitch_currentIndexChanged(int index);

private:
    Ui::homework *ui;
};

#endif // HOMEWORK_H
