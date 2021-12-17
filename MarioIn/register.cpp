#include "register.h"
#include "ui_register.h"

#include  <QMessageBox>
#include <iostream>
Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register:: getconnect(QSqlDatabase database){
    db=database;
}


void Register::on_pushButton_clicked()
{
    QString user=ui->userL->text();
    QString password=ui->passwordLine->text();
    if(user.isNull()&&password.isNull()&&user.isEmpty()&&password.isEmpty()){
        QMessageBox::warning(NULL,"提醒","不能为空!");
    }else{
       QString sql=QString("SELECT * FROM user WHERE username=%1").arg(user);
       QSqlQuery query=db.exec(sql);
        if(query.next()){
             QMessageBox::warning(NULL,"提醒","用户已存在!");
        }else{
            QString sql_1=QString("INSERT INTO user(username, password) VALUES (%1, %2);").arg(user).arg(password);
            std::cout<<sql_1.toStdString()<<std::endl;
            QSqlQuery query_1(db);
            query_1.exec(sql_1);
            QMessageBox::information(NULL,"提示","成功注册!",true);
            ui->userL->setText("");
            ui->passwordLine->setText("");
            hide();
        }
    }
}

