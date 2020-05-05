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
                                                "geology varchar)");
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
    query.prepare(QString("REPLACE INTO homework(Date,chinese,math,english,physics,chemistry,biology,politics,history,geography)"
                          "VALUES(?,?,?,?,?,?,?,?,?,?)"));
    for(i=0;i<10;i++)
        query.bindValue(i,bond[i]);
    query.exec();
    //todo: wait for the frontend guy finishing his work and debug this function
}

QString dbconnect::clean_search(){
    QSqlDatabase db=QSqlDatabase::database("sqlite");
    QSqlQuery query(db);
    QDate day;
    const QString DATE=day.currentDate().toString("ddd");
    QString StuOnDuty;
    QString toExec="select * from students where day='"+DATE.trimmed()+"'";
        if(query.exec(toExec))qDebug()<<"ok";
    while(query.next()){
        StuOnDuty+=query.value(1).toString()+query.value(4).toString()+"\n";
    }qDebug()<<StuOnDuty;
    return StuOnDuty;
}

void dbconnect::class_display(){
    QSqlDatabase db=QSqlDatabase::database("sqlite");
    QSqlQuery query(db);
    query.exec("select * from classes");
//todo:这跟你的设计有关，交给你了
}

