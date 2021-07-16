#include "motorsim.h"
#include "ui_motorsim.h"

MotorSim::MotorSim(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MotorSim)
{
    ui->setupUi(this);
    QPixmap pix("/home/enge/GUI/MotorSim/images/TargetLadderTUNL.png");
    ui->label_30->setPixmap(pix);
    ui->label_30->show();
}

MotorSim::~MotorSim()
{
    delete ui;
}

/*setText(QString::number(value));

void MotorSim::on_qanalogslider_valueChanged(double value)
{
    ui->qelineedit_4->setText(QString::number(value));
    ui->qanalogslider->getValue();
    ui->qelineedit_4->writeNow();
}
*/
void MotorSim::on_valueset_increase_clicked()
{
    ui->qelineedit_5->setText(QString::number(\
                ui->qelineedit_5->text().toDouble()
                +double(ui->valueset_1->isChecked())\
                +double(ui->valueset_01->isChecked())/10\
                +double(ui->valueset_001->isChecked())/100\
                +double(ui->valueset_0001->isChecked())/1000));
    ui->qelineedit_5->writeNow();
    //ui->qelabel->setVariableNameProperty("MyMotor:m2.RBV");
}


void MotorSim::on_valueset_decrease_clicked()
{
    ui->qelineedit_5->setText(QString::number(\
                ui->qelineedit_5->text().toDouble()
                -double(ui->valueset_1->isChecked())\
                -double(ui->valueset_01->isChecked())/10\
                -double(ui->valueset_001->isChecked())/100\
                -double(ui->valueset_0001->isChecked())/1000));
    ui->qelineedit_5->writeNow();
}







void MotorSim::on_valueset_1_clicked(int value)
{
    if(value)
    {
    ui->qelineedit_4->setText(QString::number(1));
    ui->qelineedit_4->writeNow();
    }
}


void MotorSim::on_valueset_01_clicked(int value)
{
    if(value)
    {
    ui->qelineedit_4->setText(QString::number(0.1*value));
    ui->qelineedit_4->writeNow();
    }
}


void MotorSim::on_valueset_001_clicked(int value)
{
    if(value)
    {
    ui->qelineedit_4->setText(QString::number(0.01*value));
    ui->qelineedit_4->writeNow();
    }
}


void MotorSim::on_valueset_0001_clicked(int value)
{
    {
    ui->qelineedit_4->setText(QString::number(0.001*value));
    ui->qelineedit_4->writeNow();
    }
}



void MotorSim::on_maxSpeed_Slider_valueChanged(int value)
{
    double Range=5;
    ui->maxSpeed_disp->setText(QString::number(value*Range/100));
    ui->maxSpeed_disp->writeNow();
}


void MotorSim::on_speed_Slider_valueChanged(int value)
{
    double Range=5;
    ui->speed_disp->setText(QString::number(value*Range/100));
    ui->speed_disp->writeNow();
}


void MotorSim::on_baseSpeed_Slider_valueChanged(int value)
{
    double Range=5;
    ui->baseSpeed_disp->setText(QString::number(value*Range/100));
    ui->baseSpeed_disp->writeNow();
}


void MotorSim::on_accelTime_Slider_valueChanged(int value)
{
    double Range=10;
    ui->accelTime_disp->setText(QString::number(value*Range/100));
    ui->accelTime_disp->writeNow();
}


void MotorSim::on_backlashDist_Slider_valueChanged(int value)
{
    double Range=1;
    ui->backlashDist_disp->setText(QString::number(value*Range/100));
    ui->backlashDist_disp->writeNow();
}






void MotorSim::on_unit_mm_clicked(int value)
{
    if(value)
    {
    ui->qelineedit_6->setText(QString::fromStdString("mm"));
    ui->qelineedit_6->writeNow();
    }
}



void MotorSim::on_unit_cm_clicked(int value)
{
    if(value)
    {
    ui->qelineedit_6->setText(QString::fromStdString("cm"));
    ui->qelineedit_6->writeNow();
    }
}




void MotorSim::on_backlashDist_Slider_3_valueChanged(int value)
{
    ui->qelineedit_9->setText(QString::number(floor(value/100)*100));
    ui->qelineedit_9->writeNow();
}


void MotorSim::on_valueset_8_clicked(int value)
{
    if(value)
    {
        ui->mmPerRevStep->setText(QString::number(1));
    }
}


void MotorSim::on_valueset_6_clicked(int value)
{
    if(value)
    {
        ui->mmPerRevStep->setText(QString::number(0.1));
    }
}


void MotorSim::on_valueset_9_clicked(int value)
{
    if(value)
    {
        ui->mmPerRevStep->setText(QString::number(0.01));
    }
}


void MotorSim::on_valueset_7_clicked(int value)
{
    if(value)
    {
        ui->mmPerRevStep->setText(QString::number(0.001));
    }
}


void MotorSim::on_valueset_increase_3_clicked()
{
    ui->qelineedit_12->setText(QString::number(ui->qelineedit_12->text().toDouble()+ui->mmPerRevStep->text().toDouble()));
    ui->qelineedit_12->writeNow();
}


void MotorSim::on_valueset_decrease_3_clicked()
{
    ui->qelineedit_12->setText(QString::number(ui->qelineedit_12->text().toDouble()-ui->mmPerRevStep->text().toDouble()));
    ui->qelineedit_12->writeNow();
}



void MotorSim::on_value_apply_clicked()
{
    QLineEdit *p;
    switch(ui->comboBox->currentIndex())
    {case 0:
        p=ui->lineEdit;
        break;
    case 1:
            p=ui->lineEdit_2;
            break;
    case 2:
            p=ui->lineEdit_3;
            break;
    case 3:
            p=ui->lineEdit_4;
            break;
    case 4:
            p=ui->lineEdit_5;
            break;
    case 5:
            p=ui->lineEdit_6;
            break;
    case 6:
            p=ui->lineEdit_7;
            break;
    }
    p->setText(ui->lineEdit_8->text());
}


void MotorSim::on_dial_1_valueChanged(int value)
{
    ui->lineEdit_8->setText(QString::number(value+double(ui->dial_01->value())/10+double(ui->dial_001->value())/100+double(ui->dial_0001->value())/1000));
}


void MotorSim::on_dial_01_valueChanged(int value)
{
    ui->lineEdit_8->setText(QString::number(ui->dial_1->value()+double(value)/10+double(ui->dial_001->value())/100+double(ui->dial_0001->value())/1000));
}


void MotorSim::on_dial_001_valueChanged(int value)
{
    ui->lineEdit_8->setText(QString::number(ui->dial_1->value()+double(ui->dial_01->value())/10+double(value)/100+double(ui->dial_0001->value())/1000));
}


void MotorSim::on_dial_0001_valueChanged(int value)
{
    ui->lineEdit_8->setText(QString::number(ui->dial_1->value()+double(ui->dial_01->value())/10+double(ui->dial_001->value())/100+double(value)/1000));
}


void MotorSim::on_radioButton_6_clicked()
{
    ui->qelineedit_5->setText(ui->lineEdit->text());
    ui->qelineedit_5->writeNow();
}


void MotorSim::on_radioButton_5_clicked()
{
    ui->qelineedit_5->setText(ui->lineEdit_2->text());
    ui->qelineedit_5->writeNow();
}


void MotorSim::on_radioButton_4_clicked()
{
    ui->qelineedit_5->setText(ui->lineEdit_3->text());
    ui->qelineedit_5->writeNow();
}


void MotorSim::on_radioButton_3_clicked()
{
    ui->qelineedit_5->setText(ui->lineEdit_4->text());
    ui->qelineedit_5->writeNow();
}


void MotorSim::on_radioButton_2_clicked()
{
    ui->qelineedit_5->setText(ui->lineEdit_5->text());
    ui->qelineedit_5->writeNow();
}


void MotorSim::on_radioButton_clicked()
{
    ui->qelineedit_5->setText(ui->lineEdit_6->text());
    ui->qelineedit_5->writeNow();
}


void MotorSim::on_radioButton_7_clicked()
{
    ui->qelineedit_5->setText(ui->lineEdit_7->text());
    ui->qelineedit_5->writeNow();
}

void MotorSim::change_motor_address(QString NewAddress)
{
    //Get current address. 'm1','m2',etc.
    QString CurrentAddress=ui->qelabel->getVariableNameProperty();
    CurrentAddress=CurrentAddress.mid(CurrentAddress.indexOf(':')+1,2);
    //ui->lineEdit_IOCName->setText(CurrentAddress);
    ui->qelabel->setVariableNameProperty(ui->qelabel->getVariableNameProperty().replace(CurrentAddress,NewAddress));
    ui->qelabel_3->setVariableNameProperty(ui->qelabel_3->getVariableNameProperty().replace(CurrentAddress,NewAddress));
    ui->qelabel_5->setVariableNameProperty(ui->qelabel_5->getVariableNameProperty().replace(CurrentAddress,NewAddress));
    ui->qelineedit->setVariableNameProperty(ui->qelineedit->getVariableNameProperty().replace(CurrentAddress,NewAddress));
    ui->qelineedit_12->setVariableNameProperty(ui->qelineedit_12->getVariableNameProperty().replace(CurrentAddress,NewAddress));
    ui->qelineedit_13->setVariableNameProperty(ui->qelineedit_13->getVariableNameProperty().replace(CurrentAddress,NewAddress));
    ui->qelineedit_4->setVariableNameProperty(ui->qelineedit_4->getVariableNameProperty().replace(CurrentAddress,NewAddress));
    ui->qelineedit_5->setVariableNameProperty(ui->qelineedit_5->getVariableNameProperty().replace(CurrentAddress,NewAddress));
    ui->qelineedit_6->setVariableNameProperty(ui->qelineedit_6->getVariableNameProperty().replace(CurrentAddress,NewAddress));
    ui->qelineedit_8->setVariableNameProperty(ui->qelineedit_8->getVariableNameProperty().replace(CurrentAddress,NewAddress));
    ui->qelineedit_9->setVariableNameProperty(ui->qelineedit_9->getVariableNameProperty().replace(CurrentAddress,NewAddress));
    ui->qepushbutton_3->setVariableNameProperty(ui->qepushbutton_3->getVariableNameProperty().replace(CurrentAddress,NewAddress));
    ui->qeradiogroup->setVariableNameProperty(ui->qeradiogroup->getVariableNameProperty().replace(CurrentAddress,NewAddress));
    ui->qeradiogroup_4->setVariableNameProperty(ui->qeradiogroup_4->getVariableNameProperty().replace(CurrentAddress,NewAddress));
    ui->qeradiogroup_5->setVariableNameProperty(ui->qeradiogroup_5->getVariableNameProperty().replace(CurrentAddress,NewAddress));
    ui->qeradiogroup_6->setVariableNameProperty(ui->qeradiogroup_6->getVariableNameProperty().replace(CurrentAddress,NewAddress));
    ui->mmPerRevStep->setVariableNameProperty(ui->mmPerRevStep->getVariableNameProperty().replace(CurrentAddress,NewAddress));
    ui->accelTime_disp->setVariableNameProperty(ui->accelTime_disp->getVariableNameProperty().replace(CurrentAddress,NewAddress));
    ui->backlashDist_disp->setVariableNameProperty(ui->backlashDist_disp->getVariableNameProperty().replace(CurrentAddress,NewAddress));
    ui->baseSpeed_disp->setVariableNameProperty(ui->baseSpeed_disp->getVariableNameProperty().replace(CurrentAddress,NewAddress));
    ui->maxSpeed_disp->setVariableNameProperty(ui->maxSpeed_disp->getVariableNameProperty().replace(CurrentAddress,NewAddress));
    ui->speed_disp->setVariableNameProperty(ui->speed_disp->getVariableNameProperty().replace(CurrentAddress,NewAddress));
}


void MotorSim::on_radio_MotorID1_clicked()
{
    change_motor_address("m1");
}




void MotorSim::on_radio_MotorID2_clicked()
{
    change_motor_address("m2");

}


void MotorSim::on_radioButton_10_clicked()
{
    change_motor_address("m3");
}


void MotorSim::on_radio_MotorID4_clicked()
{
    change_motor_address("m4");
}


void MotorSim::on_lineEdit_IOCName_textEdited(const QString &NewIOC)
{
    QString CurrentIOC=ui->qelabel->getVariableNameProperty();
    CurrentIOC=CurrentIOC.mid(0,CurrentIOC.indexOf(':'));
    if(NewIOC!="")
    {
    ui->qelabel->setVariableNameProperty(ui->qelabel->getVariableNameProperty().replace(0,CurrentIOC.length(),NewIOC));
    ui->qelabel_3->setVariableNameProperty(ui->qelabel_3->getVariableNameProperty().replace(0,CurrentIOC.length(),NewIOC));
    ui->qelabel_5->setVariableNameProperty(ui->qelabel_5->getVariableNameProperty().replace(0,CurrentIOC.length(),NewIOC));
    ui->qelineedit->setVariableNameProperty(ui->qelineedit->getVariableNameProperty().replace(0,CurrentIOC.length(),NewIOC));
    ui->qelineedit_12->setVariableNameProperty(ui->qelineedit_12->getVariableNameProperty().replace(0,CurrentIOC.length(),NewIOC));
    ui->qelineedit_13->setVariableNameProperty(ui->qelineedit_13->getVariableNameProperty().replace(0,CurrentIOC.length(),NewIOC));
    ui->qelineedit_4->setVariableNameProperty(ui->qelineedit_4->getVariableNameProperty().replace(0,CurrentIOC.length(),NewIOC));
    ui->qelineedit_5->setVariableNameProperty(ui->qelineedit_5->getVariableNameProperty().replace(0,CurrentIOC.length(),NewIOC));
    ui->qelineedit_6->setVariableNameProperty(ui->qelineedit_6->getVariableNameProperty().replace(0,CurrentIOC.length(),NewIOC));
    ui->qelineedit_8->setVariableNameProperty(ui->qelineedit_8->getVariableNameProperty().replace(0,CurrentIOC.length(),NewIOC));
    ui->qelineedit_9->setVariableNameProperty(ui->qelineedit_9->getVariableNameProperty().replace(0,CurrentIOC.length(),NewIOC));
    ui->qepushbutton_3->setVariableNameProperty(ui->qepushbutton_3->getVariableNameProperty().replace(0,CurrentIOC.length(),NewIOC));
    ui->qeradiogroup->setVariableNameProperty(ui->qeradiogroup->getVariableNameProperty().replace(0,CurrentIOC.length(),NewIOC));
    ui->qeradiogroup_4->setVariableNameProperty(ui->qeradiogroup_4->getVariableNameProperty().replace(0,CurrentIOC.length(),NewIOC));
    ui->qeradiogroup_5->setVariableNameProperty(ui->qeradiogroup_5->getVariableNameProperty().replace(0,CurrentIOC.length(),NewIOC));
    ui->qeradiogroup_6->setVariableNameProperty(ui->qeradiogroup_6->getVariableNameProperty().replace(0,CurrentIOC.length(),NewIOC));
    ui->mmPerRevStep->setVariableNameProperty(ui->mmPerRevStep->getVariableNameProperty().replace(0,CurrentIOC.length(),NewIOC));
    ui->accelTime_disp->setVariableNameProperty(ui->accelTime_disp->getVariableNameProperty().replace(0,CurrentIOC.length(),NewIOC));
    ui->backlashDist_disp->setVariableNameProperty(ui->backlashDist_disp->getVariableNameProperty().replace(0,CurrentIOC.length(),NewIOC));
    ui->baseSpeed_disp->setVariableNameProperty(ui->baseSpeed_disp->getVariableNameProperty().replace(0,CurrentIOC.length(),NewIOC));
    ui->maxSpeed_disp->setVariableNameProperty(ui->maxSpeed_disp->getVariableNameProperty().replace(0,CurrentIOC.length(),NewIOC));
    ui->speed_disp->setVariableNameProperty(ui->speed_disp->getVariableNameProperty().replace(0,CurrentIOC.length(),NewIOC));
    }
}


void MotorSim::on_comboBox_currentIndexChanged(int index)
{
    QLineEdit *p;
    switch(ui->comboBox->currentIndex())
    {case 0:
        p=ui->lineEdit;
        break;
    case 1:
            p=ui->lineEdit_2;
            break;
    case 2:
            p=ui->lineEdit_3;
            break;
    case 3:
            p=ui->lineEdit_4;
            break;
    case 4:
            p=ui->lineEdit_5;
            break;
    case 5:
            p=ui->lineEdit_6;
            break;
    case 6:
            p=ui->lineEdit_7;
            break;
    }
    ui->lineEdit_8->setText(p->text());
}

