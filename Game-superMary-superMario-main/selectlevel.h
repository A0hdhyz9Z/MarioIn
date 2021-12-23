#ifndef SELECTLEVEL_H
#define SELECTLEVEL_H
#include <QWidget>
#include<QDialog>
#include<QPainter>
#include<QTimer>
#include "ui_mainwindow.h"
#include"mypushbutton.h"
#include"gamescene.h"
#include"gamehelp.h"
#include"difficulty_scence.h"
#include"infernal_scence.h"

class Selectlevel:public QWidget{
    Q_OBJECT
public:
    Selectlevel(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
signals:
    void back();
};

#endif // SELECTLEVEL_H
