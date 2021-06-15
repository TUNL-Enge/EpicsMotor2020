#ifndef MOTORSIM_H
#define MOTORSIM_H

#include <QMainWindow>

namespace Ui {
class MotorSim;
}

class MotorSim : public QMainWindow
{
    Q_OBJECT

public:
    explicit MotorSim(QWidget *parent = 0);
    ~MotorSim();

private:
    Ui::MotorSim *ui;
};

#endif // MOTORSIM_H
