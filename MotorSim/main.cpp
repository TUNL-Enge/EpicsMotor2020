#include "motorsim.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    double TempValueForSet=0;
    QApplication a(argc, argv);
    MotorSim w;
    w.show();

    return a.exec();
}
