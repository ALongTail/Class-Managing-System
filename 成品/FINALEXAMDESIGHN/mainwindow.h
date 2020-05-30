#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDateTime>
#include <QFont>
#include "insert.h"
#include "schedule.h"
#include "homework.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void timerUpdate(void);
    void IsChange(void);

private slots:
    void on_pushButton_clicked();
    void on_BtnClassOver_clicked();

private:
    Ui::MainWindow *ui;
    void ShowHomework(void);
    void ShowSchedule(void);
    void ShowHome(void);
};
#endif // MAINWINDOW_H
