#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "register.h"
#include  "QtSql/QSqlDatabase"
#include  "QtSql/QSqlQuery"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void sendconnect(QSqlDatabase);
private slots:
    void on_toolButton_2_clicked();

    void on_toolButton_clicked();

    void on_pushButton_clicked();

    void on_registerButton_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    Register *regi;
};
#endif // MAINWINDOW_H
