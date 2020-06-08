#include "information.h"
#include "ui_information.h"

information::information(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::information)
{
    ui->setupUi(this);
    /*----------------background---------------*/
    setAutoFillBackground(true);
    QPixmap pixmap = QPixmap("E:/hahahahaha/FINAL/-----------/2.0/Class-Managing-System/background.jpg");
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);
}

information::~information()
{
    delete ui;
}

void information::on_Btnexit_clicked()
{
    /*-----------save into database------------*/
    this->close();
}

void information::on_schedule_clicked()
{
    ui->lbTitle->setText("课 程 表");a=1;
    /*-----------save into database------------*/
}

void information::on_students_clicked()
{
    ui->lbTitle->setText("学 生 信 息");a=2;
    /*-----------save into database------------*/
}

void information::on_homework_clicked()
{
    ui->lbTitle->setText("回 家 作 业");a=3;
    /*-----------save into database------------*/
}

void information::on_BtnSearch_clicked()
{
    /*------------------search-----------------*/
}

void information::on_BtnAdd_clicked()
{
    /*--------------------add------------------*/
}

void information::display(){
    dbconnect con;
    /*-----------------display-----------------*/
    ui->tableView->addActions(
}
