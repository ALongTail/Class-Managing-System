#ifndef DBCONNECT_H
#define DBCONNECT_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QDateTime>
#include <QVariant>
#include <QSqlRecord>
#include <QTextCodec>
#include <QSqlDriver>
#include <QtDebug>

using namespace std;

class dbconnect
{
public:
    dbconnect();
    ~dbconnect();

    bool write(const QString &Table,const QString &File);
    void insert();
    QString clean_search();
    void class_display(QString &time,QString &classes);
    void homework_display(QString &mainclass,QString &mix);
    QString readitem(int i,int j);

    QString bond[10];//bond the homework datas
};

#endif // DBCONNECT_H
