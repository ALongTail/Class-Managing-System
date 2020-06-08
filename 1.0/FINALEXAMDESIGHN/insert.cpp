#include "insert.h"
#include "ui_insert.h"

Insert::Insert(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Insert)
{
    ui->setupUi(this);

    setAutoFillBackground(true);
    QPixmap pixmap = QPixmap("E:/hahahahaha/Class-Managing-System-master/FINALEXAMDESIGHN/diolog.png");
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);
}

Insert::~Insert()
{
    delete ui;
}

void Insert::on_pushButton_clicked()
{
    QDate day;
    bon[0]=day.currentDate().toString("yyyy-MM-dd");
    QString cl=ui->comboBox->currentText();int cll=ui->comboBox->currentIndex();
    QString work=ui->textEdit->toPlainText();
    bon[cll+1]=work;
    ui->textEdit->clear();
}

void Insert::on_pushButton_2_clicked()
{
    dbconnect con;qDebug()<<bon[1];
    for(int i=0;i<10;i++)con.bond[i]=bon[i];qDebug()<<con.bond[1];
    con.insert();
    this->close();
}
