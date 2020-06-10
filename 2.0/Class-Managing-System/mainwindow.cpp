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
    /*--------------database--------------*/
    dbconnect con;
    QString Stu=con.clean_search();
    ui->clean->setText(Stu);//student on duty
    showClasses();//classes
    bool flag=true;
    ui->remind->setText(con.readitem(-1,10,"homework",flag));//remind
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
    /*---------------auto switch---------------*/
    if((hour == clover[0] && minute == clover[1]+10 && second == 00) || (hour==clover[0]+1 && minute == clover[1]-50 && second == 00))//10min after class, switch
        showHWork();
    if( hour == 21 && minute == 30 && second == 00 )
        this->close();
}

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
    if(ui->BtnSwitch->text()=="自习"){
        ui->BtnSwitch->setText("上课");
        ui->BtnHWork->setEnabled(false);//自习就别加作业了
        showHWork();
    }
    else{
        ui->BtnSwitch->setText("自习");
        showClasses();
        ui->BtnHWork->setEnabled(true);
    }
}

/*-------switch between classes and homework--------*/
void MainWindow::showClasses(){
    QFont font("Bahnschrift Light",24,50);
    ui->lbleft->setFont(font);
    ui->lbright->setFont(font);
    ui->lbleft->setAlignment(Qt::AlignCenter);
    ui->lbright->setAlignment(Qt::AlignCenter);//set font
    dbconnect con;
    QString time,classes,over;
    con.class_display(time,classes,over);
    ui->lbleft->setText(time);
    ui->lbright->setText(classes);
    clover[0]=over.mid(0,2).toInt();
    clover[1]=over.mid(3,2).toInt();qDebug()<<clover[0]<<" "<<clover[1];
}

void MainWindow::showHWork(){
    QFont font("Bahnschrift Light",18,50);
    ui->lbleft->setFont(font);
    ui->lbright->setFont(font);
    ui->lbleft->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
    ui->lbright->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);//set font
    dbconnect con;
    QString mainclasses,mixedclasses;
    con.homework_display(mainclasses,mixedclasses);
    ui->lbleft->setText(mainclasses);
    ui->lbright->setText(mixedclasses);
    bool flag=true;
    ui->remind->setText(con.readitem(-1,10,"homework",flag));
}

