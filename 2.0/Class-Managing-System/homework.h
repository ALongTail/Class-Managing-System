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

private:
    Ui::homework *ui;
};

#endif // HOMEWORK_H
