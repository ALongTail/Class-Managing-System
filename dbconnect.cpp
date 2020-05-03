#include "dbconnect.h"

dbconnect::dbconnect(){
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE","sqlite");
        db.setHostName("localhost");
        db.setPort(3306);
        db.setDatabaseName("medium.db");
        db.setUserName("root");
        db.setPassword("qazwsx123");
        if(db.open())qDebug()<<"open";
    QSqlQuery query(db);
        bool table1=query.exec("create table if not exists students(id int primary key,name varchar,sex varchar,day varchar,duty varchar)");
        bool table2=query.exec("create table if not exists classes(id int primary key,timestart varchar,timeover varchar,"
                                                "周一 varchar,周二 varchar,周三 varchar,周四 varchar,周五 varchar)");
        bool table3=query.exec("create table if not exists homework(Date varchar primary key,chinese varchar,math varchar,english varchar,"
                                                "physics varchar,chemistry varchar,biology varchar,politics varchar,history varchar,"
                                                "geology varchar,elseall varchar)");
        if(table1&&table2&&table3)qDebug()<<"tables";
}

dbconnect::~dbconnect(){
    QSqlDatabase db=QSqlDatabase::database("sqlite");
    QSqlQuery query(db);
    //write("homework","homework.csv");
    db.close();
//todo: solve the RAM problem
}

bool dbconnect::write(const QString &Table, const QString &File){
    //todo:fuck it
    return true;
}

void dbconnect::insert(){
    QSqlDatabase db=QSqlDatabase::database("sqlite");
    int i;
    QSqlQuery query(db);
    query.prepare(QString("REPLACE INTO homework(Date,chinese,math,english,physics,chemistry,biology,politics,history,geography,elseall)"
                          "VALUES(?,?,?,?,?,?,?,?,?,?,?)"));
    for(i=0;i<10;i++)
        query.bindValue(i,bond[i]);
    query.exec();
    //todo: wait for the frontend guy finishing his work and debug this function
}

QString dbconnect::clean_search(){
    QSqlDatabase db=QSqlDatabase::database("sqlite");
    QSqlQuery query(db);
    QDate day;
    const QString date=day.currentDate().toString("ddd");
        qDebug()<<date;
    QString StuOnDuty;
    query.exec("select * from students where day='&trim(date)&'");
    QString s;
    QSqlRecord rec=query.record();qDebug()<<rec.count();
    while(query.next()){
        s+=query.value(1).toString()+query.value(4).toString()+"\n";
        qDebug()<<s;
    }
    return s;
//todo: debug
}

void dbconnect::class_display(){
    QSqlDatabase db=QSqlDatabase::database("sqlite");
    QSqlQuery query(db);
    query.exec("select * from classes");
//todo: display today's class and their start and over time in labels
}

