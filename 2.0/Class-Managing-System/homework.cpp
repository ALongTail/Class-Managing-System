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
    /*--------------insert initialize-------------*/
    QDate day;
    bon[0]=day.currentDate().toString("yyyy-MM-dd");
}

homework::~homework()
{
    delete ui;
}

void homework::on_BtnInsert_clicked()
{
    /*---------insert and close---------*/
    QString work=ui->textEdit->toPlainText();
    if(work!=""){
        QString cl=ui->ClassSwitch->currentText();int cll=ui->ClassSwitch->currentIndex();
        bon[cll+1]=work;
    }
    dbconnect con;qDebug()<<bon[1];
    for(int i=0;i<10;i++)con.bond[i]=bon[i];qDebug()<<con.bond[1];
    con.insert();
    this->close();
}

void homework::on_BtnNext_clicked()
{
    /*---------bond-----------*/
    QString cl=ui->ClassSwitch->currentText();int cll=ui->ClassSwitch->currentIndex();
    QString work=ui->textEdit->toPlainText();
    bon[cll+1]=work;
    ui->textEdit->clear();
}
