#include "homework.h"
#include "ui_homework.h"

Homework::Homework(QWidget *parent) ://数据库只能覆盖；作业内容不能实时更新
    QMainWindow(parent),
    ui(new Ui::Homework)
{
    ui->setupUi(this);

    QTimer *timer1 = new QTimer(this);
    connect(timer1,SIGNAL(timeout()),this,SLOT(timerUpdate()));
    timer1->start(1000);

    QTimer *timer2 = new QTimer(this);
    connect(timer2,SIGNAL(timeout()),this,SLOT(IsChange()));
    timer2->start(1000);

    dbconnect con;
    QString student=con.clean_search();
    ui->clean->setText(student);

    QString mainclass,mix;
    con.homework_display(mainclass,mix);
    ui->homework1->setText(mainclass);
    ui->homework4->setText(mix);

    setAutoFillBackground(true);
    QPixmap pixmap = QPixmap("E:/hahahahaha/Class-Managing-System-master/FINALEXAMDESIGHN/background.jpg");
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);
}

Homework::~Homework()
{
    delete ui;
}

void Homework::timerUpdate(void)
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

void Homework::IsChange()
{
    QTime current_time = QTime::currentTime();
    int hour = current_time.hour();        //当前的小时
    int minute = current_time.minute();    //当前的分
    int second = current_time.second();    //当前的秒
    if( hour == 21 && minute == 30 && second == 00 )
        Homework::close();
}

void Homework::on_pushButton_clicked()
{
    this->close();
}

void Homework::on_pushButton_2_clicked()
{
    Insert *in=new Insert(this);
    in->show();
}

void Homework::on_BtnClassOver_clicked()
{
    this->close();
}

void Homework::on_pushButton_3_clicked()
{
    Schedule *sch=new Schedule(this);
    sch->show();
}
