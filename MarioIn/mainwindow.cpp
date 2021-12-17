#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "register.h"
#include "iostream"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    regi=new Register;
    db=QSqlDatabase::addDatabase("QODBC");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("Account");
    db.setUserName("root");
    db.setPassword("159357");
    bool ok=db.open();
    if(ok) {
        std::cout<<"success!"<<std::endl;
    }else{
        std::cout<<"fail!"<<std::endl;
    }
    connect(this,SIGNAL(sendconnect(QSqlDatabase)),regi,
            SLOT(getconnect(QSqlDatabase)));
    emit sendconnect(db);
//    setWindowFlags(Qt::FramelessWindowHint|windowFlags());
//    setAttribute(Qt::WA_TranslucentBackground);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_toolButton_2_clicked()
{
    close();
}




void MainWindow::on_toolButton_clicked()
{
    showMinimized();
}


void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_registerButton_clicked()
{
    regi->show();
}

