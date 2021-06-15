#include "motorsim.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MotorSim w;
    w.show();

    return a.exec();
}
