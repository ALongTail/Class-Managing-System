#include "schedule.h"
#include "ui_schedule.h"

Schedule::Schedule(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Schedule)
{
    ui->setupUi(this);

    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;
    setWindowFlags(windowFlag);

    QFont NameFont;
    NameFont.setPointSize(16);
    ui->Name->setFont(NameFont);

//    QFont ClassFont;
//    ClassFont.setPointSize(10);
//    ui->tableWidget->setFont(ClassFont);
//    ui->tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
//    ui->tableWidget->setColumnWidth(1,50);
//    ui->tableWidget->setColumnWidth(2,50);
//    ui->tableWidget->setColumnWidth(3,50);
//    ui->tableWidget->setColumnWidth(4,50);
//    ui->tableWidget->setColumnWidth(5,50);
//    ui->tableWidget->setRowHeight(1,30);
//    ui->tableWidget->setRowHeight(2,30);
//    ui->tableWidget->setRowHeight(3,30);
//    ui->tableWidget->setRowHeight(4,30);
//    ui->tableWidget->setRowHeight(5,30);
//    ui->tableWidget->setRowHeight(6,30);
//    ui->tableWidget->setRowHeight(7,30);
//    ui->tableWidget->setRowHeight(8,30);

    dbconnect conn;
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++){
            ui->tableWidget->setItem(i,j,new QTableWidgetItem(conn.readitem(i,j)));
        }

    setAutoFillBackground(true);
    QPixmap pixmap = QPixmap("E:/hahahahaha/Class-Managing-System-master/FINALEXAMDESIGHN/diolog.png");
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);
}

Schedule::~Schedule()
{
    delete ui;
}
