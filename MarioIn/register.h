#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include  "QtSql/QSqlDatabase"
#include  "QtSql/QSqlQuery"
namespace Ui {
class Register;
}

class Register : public QWidget
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:
    void getconnect(QSqlDatabase);
    void on_pushButton_clicked();

private:
    Ui::Register *ui;
    QSqlDatabase db;
};

#endif // REGISTER_H
