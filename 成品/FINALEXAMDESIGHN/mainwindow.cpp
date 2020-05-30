#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "insert.h"
#include <QMenuBar>
#include <QTime>
#include "dbconnect.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect( ui->pushButton_2 , &QPushButton::clicked , this , &MainWindow::ShowHomework);
    connect( ui->BtnClassBegin , &QPushButton::clicked , this , &MainWindow::ShowSchedule);

    QTimer *timer1 = new QTimer(this);
    connect(timer1,SIGNAL(timeout()),this,SLOT(timerUpdate()));
    timer1->start(1000);

    QTimer *timer2 = new QTimer(this);
    connect(timer2,SIGNAL(timeout()),this,SLOT(IsChange()));
    timer2->start(1000);

    dbconnect con;
    QString student=con.clean_search();
    ui->clean->setText(student);

    QString time,classes;
    con.class_display(time,classes);

    QString Classes[8];int y=0; QString Time[8];int x=0;
    for(int i=0;i<classes.length();i++){
        if(classes[i]=="\n")y++;
        Classes[y]+=classes[i];
    }
    ui->class1->setText("\n"+Classes[0]);
    ui->class2->setText(Classes[1]);
    ui->class3->setText(Classes[2]);
    ui->class4->setText(Classes[3]);
    ui->class5->setText(Classes[4]);
    ui->class6->setText(Classes[5]);
    ui->class7->setText(Classes[6]);
    ui->class8->setText(Classes[7]);

    for(int i=0;i<time.length();i++){
        if(time[i]=="\n")x++;
        Time[x]+=time[i];
    }
    ui->time1->setText(Time[0]);
    ui->time2->setText(Time[1]);
    ui->time3->setText(Time[2]);
    ui->time4->setText(Time[3]);
    ui->time5->setText(Time[4]);
    ui->time6->setText(Time[5]);
    ui->time7->setText(Time[6]);
    ui->time8->setText(Time[7]);
    //    Qt::WindowFlags windowFlag  = Qt::Dialog;
    //    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    //    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    //    windowFlag                  |= Qt::WindowCloseButtonHint;
    //    setWindowFlags(windowFlag);
    setAutoFillBackground(true);
    QPixmap pixmap = QPixmap("E:/hahahahaha/Class-Managing-System-master/FINALEXAMDESIGHN/background.jpg");
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
}


void MainWindow::timerUpdate(void)
{
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

void MainWindow::ShowHomework()
{
    Insert *Homework = new Insert(this);
    Homework->show();
}

void MainWindow::ShowSchedule()
{
    Schedule *ClassSchedule = new Schedule(this);
    ClassSchedule->show();
}

void MainWindow::ShowHome(){
    Homework *Home=new Homework(this);
    Home->showMaximized();
}

void MainWindow::IsChange()
{
    QTime current_time = QTime::currentTime();
    int hour = current_time.hour();
    int minute = current_time.minute();
    int second = current_time.second();
    if( hour == 7 && minute == 00 && second == 00 )
        ShowSchedule();
    if( hour == 17 && minute == 00 && second == 00 )
        ShowHomework();
    if( hour == 21 && minute == 30 && second == 00 )
        MainWindow::close();
}

void MainWindow::on_BtnClassOver_clicked()
{
    ShowHome();
}
