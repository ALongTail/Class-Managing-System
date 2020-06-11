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

    void insert();
    QString clean_search();
    void class_display(QString &time,QString &classes,QString &over);
    void homework_display(QString &mainclass,QString &mix);
    QString readitem(int i,int j,QString s,bool &flag);
    void writeitem(QString Tab,QStringList s,int jmax);
    void add(QString Tab,QString s);
    QList<int> search(QString Tab,int jmax,QString s);

    QString bond[11];//bond the homework datas
};

#endif // DBCONNECT_H
