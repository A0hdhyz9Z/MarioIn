#include "gameui.h"
#include "ui_gameui.h"

GameUI::GameUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameUI)
{
    ui->setupUi(this);
}

GameUI::~GameUI()
{
    delete ui;
}
