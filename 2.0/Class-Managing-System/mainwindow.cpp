#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){
    ui->setupUi(this);
    /*-----------------time---------------*/
    QTimer *timer1 = new QTimer(this);
    connect(timer1,SIGNAL(timeout()),this,SLOT(timerUpdate()));
    timer1->start(1000);
    QTimer *timer2 = new QTimer(this);
    connect(timer2,SIGNAL(timeout()),this,SLOT(IsChange()));
    timer2->start(1000);
    /*--------------background------------*/
    setAutoFillBackground(true);
    QPixmap pixmap = QPixmap("E:/hahahahaha/FINAL/-----------/2.0/Class-Managing-System/background.jpg");
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);
}

void MainWindow::timerUpdate(){
    QDateTime time = QDateTime::currentDateTime();
    QString time_hour = time.toString("hh");
    QString time_min = time.toString("mm");
    QString time_second = time.toString("ss");
    QString Date = time.toString("yyyy年MM月dd日 ddd");
    ui->TimeClock_Hour->display(time_hour);
    ui->TimeClock_Min->display(time_min);
    ui->TimeClock_Sec->display(time_second);
    QFont TimeFont;
    TimeFont.setPointSize(16);
    ui->label_date->setFont(TimeFont);
    ui->label_date->setText(Date);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::IsChange(){
    QTime current_time = QTime::currentTime();
    int hour = current_time.hour();
    int minute = current_time.minute();
    int second = current_time.second();
    /*---------------todo: set time---------------*/
    if( hour == 7 && minute == 00 && second == 00 )
        /*----------------todo: ShowSchedule---------------*/
    if( hour == 17 && minute == 00 && second == 00 )
        /*----------------todo: ShowHomework---------------*/
    if( hour == 21 && minute == 30 && second == 00 )
        this->close();
}//switch on time

/*-------------buttons---------------*/
void MainWindow::on_BtnExit_clicked(){
    this->close();
}

void MainWindow::on_BtnHWork_clicked(){
    homework *H=new homework(this);
    H->show();
}

void MainWindow::on_BtnInfo_clicked()
{
    information *I=new information(this);
    I->show();
}

void MainWindow::on_BtnSwitch_clicked()
{
    if(ui->BtnSwitch->text()=="自习")
        ui->BtnSwitch->setText("上课");
    else
        ui->BtnSwitch->setText("自习");
}//switch between classes and homework
