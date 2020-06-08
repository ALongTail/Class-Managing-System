#ifndef INFORMATION_H
#define INFORMATION_H

#include <QDialog>

namespace Ui {
class information;
}

class information : public QDialog
{
    Q_OBJECT

public:
    explicit information(QWidget *parent = nullptr);
    ~information();

private slots:
    void on_Btnexit_clicked();

    void on_schedule_clicked();

    void on_students_clicked();

    void on_homework_clicked();

private:
    Ui::information *ui;
};

#endif // INFORMATION_H
