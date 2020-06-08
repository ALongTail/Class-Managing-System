#include "homework.h"
#include "ui_homework.h"

homework::homework(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::homework)
{
    ui->setupUi(this);
    setAutoFillBackground(true);
    /*--------------background------------*/
    QPixmap pixmap = QPixmap("E:/hahahahaha/FINAL/-----------/2.0/Class-Managing-System/background.jpg");
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);
}

homework::~homework()
{
    delete ui;
}

void homework::on_BtnInsert_clicked()
{
    /*---------insert---------*/
    this->close();
}

void homework::on_BtnNext_clicked()
{
    /*---------bond-----------*/
    ui->textEdit->clear();
}
