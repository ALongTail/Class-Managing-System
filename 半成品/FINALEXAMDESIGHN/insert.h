#ifndef INSERT_H
#define INSERT_H

#include <QDialog>
#include <QtDebug>
#include "dbconnect.h"

namespace Ui {
class Insert;
}

class Insert : public QDialog
{
    Q_OBJECT

public:
    explicit Insert(QWidget *parent = nullptr);
    ~Insert();
    QString bon[10];

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Insert *ui;
};

#endif // INSERT_H
