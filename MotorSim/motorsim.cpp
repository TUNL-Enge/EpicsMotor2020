#include "motorsim.h"
#include "ui_motorsim.h"

MotorSim::MotorSim(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MotorSim)
{
    ui->setupUi(this);
}

MotorSim::~MotorSim()
{
    delete ui;
}
