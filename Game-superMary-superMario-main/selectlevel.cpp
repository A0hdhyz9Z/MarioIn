#include "selectlevel.h"
#include"mypushbutton.h"
#include<QTimer>

Selectlevel::Selectlevel(QWidget *parent):QWidget(parent){
    setWindowTitle("选择难度");
    resize(800, 550);
    MyPushButton *sel_btn = new MyPushButton(":/photo/back.png");//设置帮助按钮
    sel_btn->setParent(this);
    sel_btn->setFixedSize(180, 80);
    sel_btn->setIconSize(QSize(180, 80));
    sel_btn->move(500, this->height() * 0.8);
    connect(sel_btn, &QPushButton::clicked, [=]() {
        sel_btn->zoom1();
        sel_btn->zoom2();
        QTimer::singleShot(500, this, [=]() {
            this->close();
            emit
            this->back();
        });
    });
    MyPushButton *easy_btn=new MyPushButton(":/photo/end.png");//设置简单模式按钮
    easy_btn->setParent(this);
    easy_btn->move(30,this->height()*0.25);
    connect(easy_btn, &QPushButton::clicked, [=]() {
        easy_btn->zoom1();
        easy_btn->zoom2();
        QTimer::singleShot(500,this,[=](){
            this->hide();
            GameScene *gamescene=new GameScene;
            gamescene->show();
        });
    });
    MyPushButton *difficult_btn=new MyPushButton(":/photo/end.png");//设置简单模式按钮
    difficult_btn->setParent(this);
    difficult_btn->move(30,this->height()*0.40);
    connect(difficult_btn, &QPushButton::clicked, [=]() {
        difficult_btn->zoom1();
        difficult_btn->zoom2();
        QTimer::singleShot(500,this,[=](){
            this->hide();
            GameScene *gamescene=new GameScene;
            gamescene->show();
        });
    });
    MyPushButton *infernal_btn=new MyPushButton(":/photo/end.png");//设置简单模式按钮
    infernal_btn->setParent(this);
    infernal_btn->move(30,this->height()*0.55);
    connect(infernal_btn, &QPushButton::clicked, [=]() {
        infernal_btn->zoom1();
        infernal_btn->zoom2();
        QTimer::singleShot(500,this,[=](){
            this->hide();
            GameScene *gamescene=new GameScene;
            gamescene->show();
        });
    });
}
void Selectlevel::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,800,550,QPixmap(":/photo/background1.jpg"));//画背景图
}
