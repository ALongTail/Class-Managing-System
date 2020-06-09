#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDateTime>
#include <QFont>
#include <QMenuBar>
#include <QCharRef>

#include "homework.h"
#include "information.h"
#include "dbconnect.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void showClasses();
    int clover[2];

public slots:
    void timerUpdate();
    void IsChange();
    void showHWork();

private slots:
    void on_BtnExit_clicked();
    void on_BtnHWork_clicked();
    void on_BtnInfo_clicked();
    void on_BtnSwitch_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
