#ifndef HOMEWORK_H
#define HOMEWORK_H

#include <QDialog>

namespace Ui {
class homework;
}

class homework : public QDialog
{
    Q_OBJECT

public:
    explicit homework(QWidget *parent = nullptr);
    ~homework();

private slots:
    void on_BtnNext_clicked();

    void on_BtnInsert_clicked();

private:
    Ui::homework *ui;
};

#endif // HOMEWORK_H
