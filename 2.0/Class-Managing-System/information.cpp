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
    display();
}

information::~information()
{
    delete ui;
}

void information::on_Btnexit_clicked()
{
    this->close();
}

/*-----------show the table------------*/
void information::on_schedule_clicked(){
    ui->lbTitle->setText("课 程 表");a=1;
    display();
}
void information::on_students_clicked(){
    ui->lbTitle->setText("学 生 信 息");a=2;
    display();
}
void information::on_homework_clicked(){
    ui->lbTitle->setText("回 家 作 业");a=3;
    display();
}

void information::display(){
    dbconnect con;
    QStringList str[3]={{"序号","开始","结束","周一","周二","周三","周四","周五","周六","周日"},\
                        {"学号","姓名","性别","德育分","值日日期","值日内容"},\
                        {"日期","语文","数学","英语","物理","化学","生物","政治","历史","地理","其他"}};
    switch (a) {
    case 1:
        Tab="classes";jmax=10;break;
    case 2:
        Tab="students";jmax=6;break;
    case 3:
        Tab="homework";jmax=11;break;
    }qDebug()<<a;
    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(jmax);
    ui->tableWidget->setHorizontalHeaderLabels(str[a-1]);//clear
    int i=0;
    bool flag=true;
    while(flag){
        ui->tableWidget->insertRow(i);
        for(int j=0;j<jmax;j++)
            ui->tableWidget->setItem(i,j,new QTableWidgetItem(con.readitem(i,j,Tab,flag)));
        i++;
    }
    imax=i-1;
    ui->tableWidget->setRowCount(imax);
}

/*--------------------handle-------------------*/
void information::on_BtnSearch_clicked()
{
    /*------------------search-----------------*/
    QString s=ui->textEdit->toPlainText();
    ui->textEdit->clear();
    dbconnect con;
    QList<int> li=con.search(Tab,jmax,s);
    int ii=li.size();
    int l[ii];//get the to-keep-items
    for(int i=0;i<ii;i++){
        l[i]=li.takeFirst();
    }
    int iii=imax;
    for(int i=iii-1;i>=0;i--){
        bool flag=true;
        for(int j=0;j<ii;j++){
            if(i==l[j]){flag=false;break;}
            }//if 留下 then 不去除
        if(flag){
            ui->tableWidget->removeRow(i);
            imax--;
        }
    }
}

void information::on_BtnAdd_clicked()
{
    /*-------------------add-------------------*/
    int x=ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(x);
    QString s=ui->textEdit_2->toPlainText();
    ui->tableWidget->setItem(x,0,new QTableWidgetItem(s));
    for(int j=1;j<jmax;j++)ui->tableWidget->setItem(x,j,new QTableWidgetItem());
    ui->textEdit_2->clear();
    imax++;
    CLICKED=false;
}

void information::on_BtnEdit_clicked()
{
    /*-------------------edit------------------*/
    dbconnect con;
    QStringList str;
    for(int i=0;i<imax;i++){
        for(int j=0;j<jmax;j++){
            str.append(ui->tableWidget->item(i,j)->text());
        }
        con.writeitem(Tab,str,jmax);
        str.clear();
    }
}

void information::on_pushButton_clicked()//取消添加
{
    if(CLICKED==false){
        ui->tableWidget->setRowCount(--imax);
        ui->textEdit_2->clear();
    }
    CLICKED=true;
}

void information::on_BtnCancel_clicked()
{
    display();
}

void information::on_BtnDrop_clicked()
{
    /*------------------drop the highlighted----------------------*/
}
