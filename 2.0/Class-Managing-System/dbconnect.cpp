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
        bool table1=query.exec("create table if not exists students(id int primary key,name varchar,sex varchar,scores int,day varchar,duty varchar)");
        bool table2=query.exec("create table if not exists classes(id int primary key,timestart varchar,timeover varchar,"
                                                "周一 varchar,周二 varchar,周三 varchar,周四 varchar,周五 varchar,周六 varchar,周日 varchar)");
        bool table3=query.exec("create table if not exists homework(Date varchar primary key,chinese varchar,math varchar,english varchar,"
                                                "physics varchar,chemistry varchar,biology varchar,politics varchar,history varchar,"
                                                "geology varchar,elseall varchar)");
        if(table1&&table2&&table3)qDebug()<<"tables";
}

dbconnect::~dbconnect(){
    QSqlDatabase db=QSqlDatabase::database("sqlite");
    QSqlQuery query(db);
    db.close();
//todo: solve the RAM problem
}

void dbconnect::insert(){
    QSqlDatabase db=QSqlDatabase::database("sqlite");
    QSqlQuery query(db);
        query.prepare(QString("REPLACE INTO homework VALUES(?,?,?,?,?,?,?,?,?,?,?)"));
        for(int i=0;i<11;i++)
            query.bindValue(i,bond[i]);
        if(query.exec())qDebug()<<"yes";
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
        StuOnDuty+=query.value(1).toString()+"——"+query.value(4).toString()+"\n"+"\n";
    }qDebug()<<StuOnDuty;
    return StuOnDuty;
}

void dbconnect::class_display(QString &time,QString &classes,QString &over){
    QSqlDatabase db=QSqlDatabase::database("sqlite");
    QSqlQuery query(db);
    query.exec("select * from classes");
    time.clear();
    classes.clear();
    QDate day;
    const QString date=day.currentDate().toString("ddd");
    while(query.next()){
        time+=query.value(1).toString()+"——"+query.value(2).toString()+"\n\n";
        over=query.value(2).toString();
        classes+=query.value(date).toString()+"\n\n";
    }
    time=time.mid(0,time.length()-2);
    classes=classes.mid(0,classes.length()-2);
    qDebug()<<time<<classes;
}

void dbconnect::homework_display(QString &mainclass,QString &mix){
    QSqlDatabase db=QSqlDatabase::database("sqlite");
    QSqlQuery query(db);
    query.exec("select * from homework");
    mainclass.clear();
    mix.clear();
    query.last();
    QString name[10]={" ","语文","数学","英语","物理","化学","生物","政治","历史","地理"};
    for(int i=1;i<4;i++){
        QString mid=query.value(i).toString();
        if(mid.length()!=0)
            mainclass+=name[i]+"\n"+mid+"\n\n";
    }
    for(int i=4;i<10;i++){
        QString mid=query.value(i).toString();
        if(mid.length()!=0)
            mix+=name[i]+"\n"+mid+"\n\n";
    }
    qDebug()<<mainclass<<mix;
}

QString dbconnect::readitem(int i,int j,QString s,bool &flag){
    QSqlDatabase db=QSqlDatabase::database("sqlite");
    QSqlQuery query(db);
    QString item;
    int count=0;
    query.exec("select * from '"+s.trimmed()+"'");
    if(i==-1){
        query.last();
        item=query.value(j).toString();
        return item;
    }
    else{
        while(query.next()){
            if(count==i){
                item=query.value(j).toString();return item;
            }
            count++;
        }
        flag=false;
    }
}
