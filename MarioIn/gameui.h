#ifndef GAMEUI_H
#define GAMEUI_H

#include <QDialog>

namespace Ui {
class GameUI;
}

class GameUI : public QDialog
{
    Q_OBJECT

public:
    explicit GameUI(QWidget *parent = nullptr);
    ~GameUI();

private:
    Ui::GameUI *ui;
};

#endif // GAMEUI_H
