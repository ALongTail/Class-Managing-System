main.cpp
打开软件，自动最大化显示

mainwindow.h/cpp
MainWindow() 构造函数，实现时间日期实时显示，设置界面背景，显示值日生、提示、课程表
void timerUpdate() 读取系统时间
~MainWindow() 析构函数
void IsChange() 定时切换、关闭
on_BtnHWork_clicked() 创建homework对象
on_BtnInfo_clicked() 创建information对象
on_BtnSwitch_clicked() 切换自习/上课
void showClasses() 显示当日课程表
void showHWork() 显示最新回家作业
int clover[2] 存储放学时、分

homework.h/cpp
homework() 构造函数，设置窗体背景，从数据库读取最新一次作业存入bon数组，不是当日则更新
~homework() 析构函数
on_BtnInsert_clicked() 将bon数组内容对应存入con.bond数组，存入数据库
