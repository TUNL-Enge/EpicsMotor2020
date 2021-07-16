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
    void change_motor_address(QString NewAddress);

private slots:


    void on_valueset_increase_clicked();

    void on_valueset_decrease_clicked();


    void on_valueset_1_clicked(int value);

    void on_valueset_01_clicked(int value);

    void on_valueset_001_clicked(int value);

    void on_valueset_0001_clicked(int value);

    void on_maxSpeed_Slider_valueChanged(int value);

    void on_speed_Slider_valueChanged(int value);

    void on_baseSpeed_Slider_valueChanged(int value);

    void on_accelTime_Slider_valueChanged(int value);

    void on_backlashDist_Slider_valueChanged(int value);

    void on_unit_cm_clicked(int value);

    void on_unit_mm_clicked(int value);

    void on_backlashDist_Slider_3_valueChanged(int value);

    void on_valueset_8_clicked(int value);

    void on_valueset_6_clicked(int value);

    void on_valueset_9_clicked(int value);

    void on_valueset_7_clicked(int value);

    void on_valueset_increase_3_clicked();

    void on_valueset_decrease_3_clicked();


    void on_value_apply_clicked();

    void on_dial_1_valueChanged(int value);

    void on_dial_01_valueChanged(int value);

    void on_dial_001_valueChanged(int value);

    void on_dial_0001_valueChanged(int value);

    void on_radioButton_6_clicked();

    void on_radioButton_5_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_clicked();

    void on_radioButton_7_clicked();

    void on_radio_MotorID1_clicked();

    void on_radio_MotorID2_clicked();

    void on_radioButton_10_clicked();

    void on_radio_MotorID4_clicked();

    void on_lineEdit_IOCName_textEdited(const QString &arg1);

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::MotorSim *ui;
};

#endif // MOTORSIM_H
