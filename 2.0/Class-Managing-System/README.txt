main.cpp
打开软件，自动最大化显示

mainwindow.h/cpp
MainWindow() 构造函数，实现时间日期实时显示，设置界面背景，显示值日生、提示、课程表
void timerUpdate() 读取系统时间
~MainWindow() 析构函数
void IsChange() 定时切换、关闭
void on_BtnHWork_clicked() 单击“录入作业”按钮，创建homework对象
void on_BtnInfo_clicked() 单击“查看/修改信息”按钮，创建information对象
void on_BtnSwitch_clicked() 切换自习/上课
void showClasses() 显示当日课程表，标签lbleft显示起止时间，lbright显示科目
void showHWork() 显示最新回家作业，lbleft显示主课，lbright显示综合
int clover[2] 存储放学时、分

homework.h/cpp
homework() 构造函数，设置窗体背景，从数据库读取最新一次作业存入bon数组，不是当日则更新
~homework() 析构函数
void on_BtnInsert_clicked() 将bon数组内容对应存入con.bond数组，存入数据库
void on_BtnNext_clicked() 将文本框内容存入bon数组，文本框显示提示
void on_ClassSwitch_currentIndexChanged(int) 读取对应bon数组元素内容，在文本框显示该科目作业内容
QString bon[11] 存储作业内容，其中bon[0]为日期、bon[10]为提示，不能从作业对话框录入，bon[1..9]分别对应九门科目

information.h/cpp
information() 构造函数，设置窗体背景，设置删除按钮及两个取消按钮无效，tableWidget显示课程表内容
~information() 析构函数
void on_Btnexit_clicked() “退出”按钮，关闭程序
void on_schedule_clicked()，on_students_clicked()，on_homework_clicked() 设置标题，调用display()函数使tableWidget显示对应表格
void display() 读取数据库，显示表格内容
void on_BtnSearch_clicked() 读取textEdit内容，在数据库中搜索包含该内容的数据，将其他数据从tableWidget中移除，激活BtnCancel“取消”按钮
void on_BtnAdd_clicked() 在tableWidget表中添加一行，激活pushButton“取消”按钮
void on_BtnEdit_clicked() 将tableWidget表中每一行内容，分别存入str字符串列表，更新数据库对应表
void on_pushButton_clicked() tableWidget减少一行
void on_BtnCancel_clicked() 重新显示原表内容
void on_BtnDrop_clicked() 从数据库对应表中删除选中行x对应记录，按钮本身失效
void on_tableWidget_cellClicked(int,int) 激活BtnDrop“删除选中”按钮，读取被点击的行数
QString Tab 存储当前编辑表名
int a 默认为1，代表classes表，2为students表，3为homework表
int imax,jmax 分别存储当前tableWidget行、列总数
bool CLICKED 显示pushButton是否被激活
int x 存储最新一次被点击的单元格所在行数

dbconnect.h/cpp
dbconnect() 构造函数，创建连接，创建/打开数据库及表
~dbconnect() 析构函数，关闭数据库
void insert()，QString bond[11]  更新/添加回家作业记录
QString clean_search() 从students表中读取当日值日生数据
void class_display(QString &,QString &,QString &) 从class表中读取课程时间、当日课表科目、放学时间，转化字符串
void homework_display(QString &,QString &) 从homework表中读取不为空的作业科目以及作业内容，主课与综合分别读取
QString readitem(int i,int j,QString s,bool &flag) 将s表按id字段排序，读取第i条记录第j字段内容并返回
void writeitem（QString Tab,QStringList s,int jmax) 更新/添加Tab表中一条记录
QList<int> search(QString Tab,int jmax,QString s) 将s表按id字段排序，逐条逐字段判断是否包含s，返回存储含有s的记录行数列表
void del(QString Tab,int row) 将s表按id字段排序,删除第row行

background.jpg 背景图
ICON.ico 图标

medium.db
classes：id int 主键,name varchar,sex varchar,scores int,day varchar,duty varchar
homework：id int 主键,timestart varchar,timeover varchar,周一 varchar,周二 varchar,周三 varchar,周四 varchar,周五 varchar,周六 varchar,周日 varchar
students：id varchar 主键,chinese varchar,math varchar,english varchar,physics varchar,chemistry varchar,biology varchar,politics varchar,history varchar,geology varchar,elseall varchar
