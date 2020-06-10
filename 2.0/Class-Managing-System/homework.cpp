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
    dbconnect con;bool flag=true;
    for(int i=0;i<11;i++)bon[i]=con.readitem(-1,i,"homework",flag);
    QString date=day.currentDate().toString("yyyy-MM-dd");
    if(bon[0]!=date){
        bon[0]=date;
        for(int i=1;i<11;i++)bon[i]="";
    }
    QString s=bon[1];
    ui->textEdit->setText(s);
    ui->BtnInsert->setEnabled(false);
}

homework::~homework()
{
    delete ui;
}

void homework::on_BtnInsert_clicked()
{
    /*---------insert and close---------*/
    QString work=ui->textEdit->toPlainText();
    if(work!="" && work!="\n\n\n\n\n\n\n##########请在上方选择对应的科目##########"){
        int cll=ui->ClassSwitch->currentIndex();
        bon[cll+1]=work;
    }
    dbconnect con;qDebug()<<bon[1];
    for(int i=0;i<11;i++)con.bond[i]=bon[i];qDebug()<<con.bond[1];
    con.insert();
    this->close();
}

void homework::on_BtnNext_clicked()
{
    ui->BtnInsert->setEnabled(true);
    /*---------bond-----------*/
    int cll=ui->ClassSwitch->currentIndex();
    QString work=ui->textEdit->toPlainText();
    bon[cll+1]=work;
    ui->textEdit->setText("\n\n\n\n\n\n\n##########请在上方选择对应的科目##########");
}

void homework::on_ClassSwitch_currentIndexChanged(int index)
{
    QString s=bon[index+1];
    ui->textEdit->setText(s);
}
