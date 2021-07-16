/********************************************************************************
** Form generated from reading UI file 'motorsim.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTORSIM_H
#define UI_MOTORSIM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QELabel.h"
#include "QELineEdit.h"
#include "QEPushButton.h"
#include "QERadioButton.h"
#include "QERadioGroup.h"

QT_BEGIN_NAMESPACE

class Ui_MotorSim
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QTabWidget *tabWidget;
    QWidget *tab;
    QELabel *qelabel;
    QELabel *qelabel_3;
    QEPushButton *qepushbutton_3;
    QELineEdit *qelineedit_4;
    QELineEdit *qelineedit_5;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QERadioButton *valueset_1;
    QERadioButton *valueset_01;
    QERadioButton *valueset_001;
    QERadioButton *valueset_0001;
    QPushButton *valueset_decrease;
    QPushButton *valueset_increase;
    QLabel *label_25;
    QELabel *mmPerRevStep;
    QERadioGroup *qeradiogroup;
    QELineEdit *qelineedit;
    QGroupBox *groupBox;
    QRadioButton *radio_MotorID1;
    QRadioButton *radio_MotorID2;
    QRadioButton *radioButton_10;
    QRadioButton *radio_MotorID4;
    QWidget *tab_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QELineEdit *maxSpeed_disp;
    QELineEdit *speed_disp;
    QELineEdit *baseSpeed_disp;
    QELineEdit *accelTime_disp;
    QELineEdit *backlashDist_disp;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_5;
    QSlider *maxSpeed_Slider;
    QSlider *speed_Slider;
    QSlider *baseSpeed_Slider;
    QSlider *accelTime_Slider;
    QSlider *backlashDist_Slider;
    QWidget *tab_3;
    QFrame *frame_2;
    QLabel *label_26;
    QELineEdit *qelineedit_8;
    QELineEdit *qelineedit_9;
    QLabel *label_27;
    QELineEdit *qelineedit_12;
    QLabel *label_28;
    QLabel *label_29;
    QELabel *qelabel_5;
    QERadioGroup *qeradiogroup_4;
    QERadioGroup *qeradiogroup_5;
    QGroupBox *groupBox_2;
    QERadioButton *unit_cm_2;
    QERadioButton *unit_mm_2;
    QSlider *backlashDist_Slider_3;
    QERadioGroup *qeradiogroup_6;
    QELineEdit *qelineedit_6;
    QPushButton *valueset_decrease_3;
    QPushButton *valueset_increase_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_9;
    QERadioButton *valueset_8;
    QERadioButton *valueset_6;
    QERadioButton *valueset_9;
    QERadioButton *valueset_7;
    QELineEdit *qelineedit_13;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QDial *dial_1;
    QDial *dial_001;
    QDial *dial_01;
    QDial *dial_0001;
    QComboBox *comboBox;
    QLineEdit *lineEdit_8;
    QPushButton *value_apply;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_42;
    QTextEdit *textEdit;
    QLabel *label_37;
    QLabel *label_30;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *lineEdit_23;
    QLineEdit *lineEdit_24;
    QLineEdit *lineEdit_25;
    QLineEdit *lineEdit_26;
    QLineEdit *lineEdit_27;
    QLineEdit *lineEdit_28;
    QLineEdit *lineEdit_29;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_8;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_7;
    QGroupBox *groupBox_3;
    QLineEdit *lineEdit_IOCName;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MotorSim)
    {
        if (MotorSim->objectName().isEmpty())
            MotorSim->setObjectName(QString::fromUtf8("MotorSim"));
        MotorSim->resize(656, 592);
        centralWidget = new QWidget(MotorSim);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 121, 471));
        label->setPixmap(QPixmap(QString::fromUtf8("images/MotorSimTUNL.png")));
        label->setScaledContents(true);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(26, 40, 69, 371));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(25);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setAutoFillBackground(false);
        lineEdit->setFrame(true);

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout_2->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout_2->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        verticalLayout_2->addWidget(lineEdit_6);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        verticalLayout_2->addWidget(lineEdit_7);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(280, 0, 361, 501));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        qelabel = new QELabel(tab);
        qelabel->setObjectName(QString::fromUtf8("qelabel"));
        qelabel->setGeometry(QRect(138, 50, 91, 23));
        QFont font;
        font.setPointSize(12);
        qelabel->setFont(font);
        qelabel->setFrameShape(QFrame::NoFrame);
        qelabel->setAlignment(Qt::AlignCenter);
        qelabel->setProperty("displayAlarmStateOption", QVariant::fromValue(QELabel::Never));
        qelabel->setOosAware(true);
        qelabel->setAddUnits(false);
        qelabel->setForceSign(true);
        qelabel_3 = new QELabel(tab);
        qelabel_3->setObjectName(QString::fromUtf8("qelabel_3"));
        qelabel_3->setGeometry(QRect(230, 50, 81, 21));
        QFont font1;
        font1.setPointSize(10);
        qelabel_3->setFont(font1);
        qelabel_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        qelabel_3->setProperty("displayAlarmStateOption", QVariant::fromValue(QELabel::Never));
        qelabel_3->setOosAware(true);
        qelabel_3->setAddUnits(true);
        qepushbutton_3 = new QEPushButton(tab);
        qepushbutton_3->setObjectName(QString::fromUtf8("qepushbutton_3"));
        qepushbutton_3->setGeometry(QRect(140, 290, 121, 41));
        qelineedit_4 = new QELineEdit(tab);
        qelineedit_4->setObjectName(QString::fromUtf8("qelineedit_4"));
        qelineedit_4->setGeometry(QRect(140, 140, 121, 31));
        qelineedit_4->setAlignment(Qt::AlignCenter);
        qelineedit_4->setWriteOnLoseFocus(true);
        qelineedit_4->setProperty("displayAlarmStateOption", QVariant::fromValue(QEGenericEdit::Never));
        qelineedit_4->setPrecision(3);
        qelineedit_4->setUseDbPrecision(false);
        qelineedit_5 = new QELineEdit(tab);
        qelineedit_5->setObjectName(QString::fromUtf8("qelineedit_5"));
        qelineedit_5->setGeometry(QRect(140, 90, 121, 31));
        qelineedit_5->setAlignment(Qt::AlignCenter);
        qelineedit_5->setProperty("displayAlarmStateOption", QVariant::fromValue(QEGenericEdit::Never));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 50, 111, 21));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_12 = new QLabel(tab);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(40, 96, 80, 17));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(30, 140, 81, 20));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        valueset_1 = new QERadioButton(tab);
        valueset_1->setObjectName(QString::fromUtf8("valueset_1"));
        valueset_1->setGeometry(QRect(170, 190, 132, 23));
        valueset_01 = new QERadioButton(tab);
        valueset_01->setObjectName(QString::fromUtf8("valueset_01"));
        valueset_01->setGeometry(QRect(170, 210, 132, 23));
        valueset_001 = new QERadioButton(tab);
        valueset_001->setObjectName(QString::fromUtf8("valueset_001"));
        valueset_001->setGeometry(QRect(170, 230, 132, 23));
        valueset_0001 = new QERadioButton(tab);
        valueset_0001->setObjectName(QString::fromUtf8("valueset_0001"));
        valueset_0001->setGeometry(QRect(170, 250, 132, 23));
        valueset_decrease = new QPushButton(tab);
        valueset_decrease->setObjectName(QString::fromUtf8("valueset_decrease"));
        valueset_decrease->setGeometry(QRect(120, 190, 41, 81));
        valueset_increase = new QPushButton(tab);
        valueset_increase->setObjectName(QString::fromUtf8("valueset_increase"));
        valueset_increase->setGeometry(QRect(240, 190, 41, 81));
        label_25 = new QLabel(tab);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(60, 210, 41, 51));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        mmPerRevStep = new QELabel(tab);
        mmPerRevStep->setObjectName(QString::fromUtf8("mmPerRevStep"));
        mmPerRevStep->setGeometry(QRect(280, 50, 70, 21));
        QPalette palette;
        QBrush brush(QColor(128, 128, 128, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush1(QColor(170, 0, 0, 128));
        brush1.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QBrush brush2(QColor(35, 38, 39, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        mmPerRevStep->setPalette(palette);
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        mmPerRevStep->setFont(font2);
        mmPerRevStep->setFrameShape(QFrame::StyledPanel);
        mmPerRevStep->setAlignment(Qt::AlignCenter);
        mmPerRevStep->setMargin(-1);
        mmPerRevStep->setAllowDrop(false);
        mmPerRevStep->setProperty("displayAlarmStateOption", QVariant::fromValue(QELabel::Never));
        mmPerRevStep->setAddUnits(false);
        mmPerRevStep->setForceSign(false);
        mmPerRevStep->setProperty("format", QVariant::fromValue(QELabel::LocalEnumeration));
        qeradiogroup = new QERadioGroup(tab);
        qeradiogroup->setObjectName(QString::fromUtf8("qeradiogroup"));
        qeradiogroup->setGeometry(QRect(140, 360, 200, 80));
        qelineedit = new QELineEdit(tab);
        qelineedit->setObjectName(QString::fromUtf8("qelineedit"));
        qelineedit->setGeometry(QRect(300, 410, 31, 20));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 329, 91, 111));
        radio_MotorID1 = new QRadioButton(groupBox);
        radio_MotorID1->setObjectName(QString::fromUtf8("radio_MotorID1"));
        radio_MotorID1->setGeometry(QRect(10, 25, 61, 23));
        radio_MotorID1->setChecked(true);
        radio_MotorID2 = new QRadioButton(groupBox);
        radio_MotorID2->setObjectName(QString::fromUtf8("radio_MotorID2"));
        radio_MotorID2->setGeometry(QRect(10, 45, 61, 23));
        radioButton_10 = new QRadioButton(groupBox);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));
        radioButton_10->setGeometry(QRect(10, 65, 61, 23));
        radio_MotorID4 = new QRadioButton(groupBox);
        radio_MotorID4->setObjectName(QString::fromUtf8("radio_MotorID4"));
        radio_MotorID4->setGeometry(QRect(10, 85, 61, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 133, 189));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget1);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_3->addWidget(label_17);

        label_18 = new QLabel(layoutWidget1);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_3->addWidget(label_18);

        label_19 = new QLabel(layoutWidget1);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_3->addWidget(label_19);

        label_20 = new QLabel(layoutWidget1);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        verticalLayout_3->addWidget(label_20);

        label_21 = new QLabel(layoutWidget1);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        verticalLayout_3->addWidget(label_21);

        layoutWidget_2 = new QWidget(tab_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(150, 20, 61, 191));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        maxSpeed_disp = new QELineEdit(layoutWidget_2);
        maxSpeed_disp->setObjectName(QString::fromUtf8("maxSpeed_disp"));
        maxSpeed_disp->setProperty("displayAlarmStateOption", QVariant::fromValue(QEGenericEdit::Never));

        verticalLayout_4->addWidget(maxSpeed_disp);

        speed_disp = new QELineEdit(layoutWidget_2);
        speed_disp->setObjectName(QString::fromUtf8("speed_disp"));
        speed_disp->setProperty("displayAlarmStateOption", QVariant::fromValue(QEGenericEdit::Never));

        verticalLayout_4->addWidget(speed_disp);

        baseSpeed_disp = new QELineEdit(layoutWidget_2);
        baseSpeed_disp->setObjectName(QString::fromUtf8("baseSpeed_disp"));
        baseSpeed_disp->setProperty("displayAlarmStateOption", QVariant::fromValue(QEGenericEdit::Never));

        verticalLayout_4->addWidget(baseSpeed_disp);

        accelTime_disp = new QELineEdit(layoutWidget_2);
        accelTime_disp->setObjectName(QString::fromUtf8("accelTime_disp"));
        accelTime_disp->setProperty("displayAlarmStateOption", QVariant::fromValue(QEGenericEdit::Never));

        verticalLayout_4->addWidget(accelTime_disp);

        backlashDist_disp = new QELineEdit(layoutWidget_2);
        backlashDist_disp->setObjectName(QString::fromUtf8("backlashDist_disp"));
        backlashDist_disp->setProperty("displayAlarmStateOption", QVariant::fromValue(QEGenericEdit::Never));

        verticalLayout_4->addWidget(backlashDist_disp);

        layoutWidget_3 = new QWidget(tab_2);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(220, 20, 121, 191));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        maxSpeed_Slider = new QSlider(layoutWidget_3);
        maxSpeed_Slider->setObjectName(QString::fromUtf8("maxSpeed_Slider"));
        maxSpeed_Slider->setMaximum(100);
        maxSpeed_Slider->setSingleStep(1);
        maxSpeed_Slider->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(maxSpeed_Slider);

        speed_Slider = new QSlider(layoutWidget_3);
        speed_Slider->setObjectName(QString::fromUtf8("speed_Slider"));
        speed_Slider->setMaximum(100);
        speed_Slider->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(speed_Slider);

        baseSpeed_Slider = new QSlider(layoutWidget_3);
        baseSpeed_Slider->setObjectName(QString::fromUtf8("baseSpeed_Slider"));
        baseSpeed_Slider->setMaximum(100);
        baseSpeed_Slider->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(baseSpeed_Slider);

        accelTime_Slider = new QSlider(layoutWidget_3);
        accelTime_Slider->setObjectName(QString::fromUtf8("accelTime_Slider"));
        accelTime_Slider->setMaximum(100);
        accelTime_Slider->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(accelTime_Slider);

        backlashDist_Slider = new QSlider(layoutWidget_3);
        backlashDist_Slider->setObjectName(QString::fromUtf8("backlashDist_Slider"));
        backlashDist_Slider->setMaximum(100);
        backlashDist_Slider->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(backlashDist_Slider);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        frame_2 = new QFrame(tab_3);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(20, 10, 321, 321));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_26 = new QLabel(frame_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(7, 20, 54, 20));
        label_26->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_8 = new QELineEdit(frame_2);
        qelineedit_8->setObjectName(QString::fromUtf8("qelineedit_8"));
        qelineedit_8->setGeometry(QRect(190, 30, 31, 25));
        qelineedit_8->setProperty("visible", QVariant(false));
        qelineedit_8->setProperty("displayAlarmStateOption", QVariant::fromValue(QEGenericEdit::Never));
        qelineedit_9 = new QELineEdit(frame_2);
        qelineedit_9->setObjectName(QString::fromUtf8("qelineedit_9"));
        qelineedit_9->setGeometry(QRect(180, 70, 51, 25));
        qelineedit_9->setProperty("displayAlarmStateOption", QVariant::fromValue(QEGenericEdit::Never));
        label_27 = new QLabel(frame_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(220, 70, 91, 20));
        label_27->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelineedit_12 = new QELineEdit(frame_2);
        qelineedit_12->setObjectName(QString::fromUtf8("qelineedit_12"));
        qelineedit_12->setGeometry(QRect(180, 140, 51, 25));
        qelineedit_12->setProperty("displayAlarmStateOption", QVariant::fromValue(QEGenericEdit::Never));
        qelineedit_12->setPrecision(4);
        label_28 = new QLabel(frame_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(10, 60, 121, 20));
        label_28->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_29 = new QLabel(frame_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(240, 140, 60, 20));
        label_29->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_5 = new QELabel(frame_2);
        qelabel_5->setObjectName(QString::fromUtf8("qelabel_5"));
        qelabel_5->setGeometry(QRect(210, 140, 61, 20));
        qelabel_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        qelabel_5->setProperty("displayAlarmStateOption", QVariant::fromValue(QELabel::Never));
        qeradiogroup_4 = new QERadioGroup(frame_2);
        qeradiogroup_4->setObjectName(QString::fromUtf8("qeradiogroup_4"));
        qeradiogroup_4->setGeometry(QRect(10, 260, 120, 51));
        qeradiogroup_4->setProperty("displayAlarmStateOption", QVariant::fromValue(QEAbstractWidget::Never));
        qeradiogroup_5 = new QERadioGroup(frame_2);
        qeradiogroup_5->setObjectName(QString::fromUtf8("qeradiogroup_5"));
        qeradiogroup_5->setGeometry(QRect(10, 210, 121, 51));
        qeradiogroup_5->setProperty("displayAlarmStateOption", QVariant::fromValue(QEAbstractWidget::Never));
        groupBox_2 = new QGroupBox(frame_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(77, 20, 111, 21));
        groupBox_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        unit_cm_2 = new QERadioButton(groupBox_2);
        unit_cm_2->setObjectName(QString::fromUtf8("unit_cm_2"));
        unit_cm_2->setGeometry(QRect(10, 0, 41, 23));
        unit_cm_2->setChecked(false);
        unit_mm_2 = new QERadioButton(groupBox_2);
        unit_mm_2->setObjectName(QString::fromUtf8("unit_mm_2"));
        unit_mm_2->setGeometry(QRect(60, 0, 51, 23));
        unit_mm_2->setChecked(true);
        backlashDist_Slider_3 = new QSlider(frame_2);
        backlashDist_Slider_3->setObjectName(QString::fromUtf8("backlashDist_Slider_3"));
        backlashDist_Slider_3->setGeometry(QRect(20, 80, 151, 16));
        backlashDist_Slider_3->setMinimum(100);
        backlashDist_Slider_3->setMaximum(1600);
        backlashDist_Slider_3->setSliderPosition(1600);
        backlashDist_Slider_3->setOrientation(Qt::Horizontal);
        qeradiogroup_6 = new QERadioGroup(frame_2);
        qeradiogroup_6->setObjectName(QString::fromUtf8("qeradiogroup_6"));
        qeradiogroup_6->setGeometry(QRect(140, 260, 171, 51));
        qeradiogroup_6->setProperty("displayAlarmStateOption", QVariant::fromValue(QEAbstractWidget::Never));
        qelineedit_6 = new QELineEdit(frame_2);
        qelineedit_6->setObjectName(QString::fromUtf8("qelineedit_6"));
        qelineedit_6->setGeometry(QRect(190, 30, 61, 25));
        qelineedit_6->setProperty("visible", QVariant(false));
        qelineedit_6->setProperty("displayAlarmStateOption", QVariant::fromValue(QEGenericEdit::Never));
        valueset_decrease_3 = new QPushButton(frame_2);
        valueset_decrease_3->setObjectName(QString::fromUtf8("valueset_decrease_3"));
        valueset_decrease_3->setGeometry(QRect(17, 110, 41, 81));
        valueset_increase_3 = new QPushButton(frame_2);
        valueset_increase_3->setObjectName(QString::fromUtf8("valueset_increase_3"));
        valueset_increase_3->setGeometry(QRect(130, 110, 41, 81));
        verticalLayoutWidget = new QWidget(frame_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(62, 110, 65, 81));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        valueset_8 = new QERadioButton(verticalLayoutWidget);
        valueset_8->setObjectName(QString::fromUtf8("valueset_8"));

        verticalLayout_9->addWidget(valueset_8);

        valueset_6 = new QERadioButton(verticalLayoutWidget);
        valueset_6->setObjectName(QString::fromUtf8("valueset_6"));

        verticalLayout_9->addWidget(valueset_6);

        valueset_9 = new QERadioButton(verticalLayoutWidget);
        valueset_9->setObjectName(QString::fromUtf8("valueset_9"));

        verticalLayout_9->addWidget(valueset_9);

        valueset_7 = new QERadioButton(verticalLayoutWidget);
        valueset_7->setObjectName(QString::fromUtf8("valueset_7"));

        verticalLayout_9->addWidget(valueset_7);

        qelineedit_13 = new QELineEdit(frame_2);
        qelineedit_13->setObjectName(QString::fromUtf8("qelineedit_13"));
        qelineedit_13->setGeometry(QRect(190, 257, 51, 25));
        qelineedit_13->setProperty("displayAlarmStateOption", QVariant::fromValue(QEGenericEdit::Never));
        qelineedit_13->setPrecision(4);
        gridLayoutWidget = new QWidget(tab_3);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(14, 330, 141, 131));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        dial_1 = new QDial(gridLayoutWidget);
        dial_1->setObjectName(QString::fromUtf8("dial_1"));
        dial_1->setMaximum(20);
        dial_1->setPageStep(1);

        gridLayout_2->addWidget(dial_1, 0, 0, 1, 1);

        dial_001 = new QDial(gridLayoutWidget);
        dial_001->setObjectName(QString::fromUtf8("dial_001"));
        dial_001->setMaximum(9);
        dial_001->setPageStep(1);

        gridLayout_2->addWidget(dial_001, 1, 0, 1, 1);

        dial_01 = new QDial(gridLayoutWidget);
        dial_01->setObjectName(QString::fromUtf8("dial_01"));
        dial_01->setMaximum(9);
        dial_01->setPageStep(1);

        gridLayout_2->addWidget(dial_01, 0, 1, 1, 1);

        dial_0001 = new QDial(gridLayoutWidget);
        dial_0001->setObjectName(QString::fromUtf8("dial_0001"));
        dial_0001->setMaximum(9);
        dial_0001->setPageStep(1);

        gridLayout_2->addWidget(dial_0001, 1, 1, 1, 1);

        comboBox = new QComboBox(tab_3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(240, 350, 79, 31));
        comboBox->setMaxVisibleItems(7);
        lineEdit_8 = new QLineEdit(tab_3);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setEnabled(true);
        lineEdit_8->setGeometry(QRect(240, 389, 81, 23));
        lineEdit_8->setMouseTracking(false);
        lineEdit_8->setReadOnly(true);
        value_apply = new QPushButton(tab_3);
        value_apply->setObjectName(QString::fromUtf8("value_apply"));
        value_apply->setGeometry(QRect(240, 420, 81, 31));
        label_38 = new QLabel(tab_3);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(-1, 384, 54, 20));
        label_38->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_39 = new QLabel(tab_3);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(111, 383, 20, 20));
        label_39->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_40 = new QLabel(tab_3);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(30, 450, 31, 20));
        label_40->setMouseTracking(false);
        label_40->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_41 = new QLabel(tab_3);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(87, 450, 51, 20));
        label_41->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_42 = new QLabel(tab_3);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(170, 360, 61, 71));
        label_42->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_3, QString());
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(110, 420, 161, 81));
        label_37 = new QLabel(centralWidget);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(210, 480, 54, 20));
        label_37->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_30 = new QLabel(centralWidget);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(57, -20, 141, 461));
        label_30->setPixmap(QPixmap(QString::fromUtf8("images/TargetLadderTUNL.png")));
        label_30->setScaledContents(true);
        label_30->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(26, 0, 67, 41));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 0, 67, 41));
        layoutWidget_4 = new QWidget(centralWidget);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(170, 40, 81, 371));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_7->setSpacing(25);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        lineEdit_23 = new QLineEdit(layoutWidget_4);
        lineEdit_23->setObjectName(QString::fromUtf8("lineEdit_23"));
        lineEdit_23->setAutoFillBackground(false);
        lineEdit_23->setFrame(true);

        verticalLayout_7->addWidget(lineEdit_23);

        lineEdit_24 = new QLineEdit(layoutWidget_4);
        lineEdit_24->setObjectName(QString::fromUtf8("lineEdit_24"));

        verticalLayout_7->addWidget(lineEdit_24);

        lineEdit_25 = new QLineEdit(layoutWidget_4);
        lineEdit_25->setObjectName(QString::fromUtf8("lineEdit_25"));

        verticalLayout_7->addWidget(lineEdit_25);

        lineEdit_26 = new QLineEdit(layoutWidget_4);
        lineEdit_26->setObjectName(QString::fromUtf8("lineEdit_26"));

        verticalLayout_7->addWidget(lineEdit_26);

        lineEdit_27 = new QLineEdit(layoutWidget_4);
        lineEdit_27->setObjectName(QString::fromUtf8("lineEdit_27"));

        verticalLayout_7->addWidget(lineEdit_27);

        lineEdit_28 = new QLineEdit(layoutWidget_4);
        lineEdit_28->setObjectName(QString::fromUtf8("lineEdit_28"));

        verticalLayout_7->addWidget(lineEdit_28);

        lineEdit_29 = new QLineEdit(layoutWidget_4);
        lineEdit_29->setObjectName(QString::fromUtf8("lineEdit_29"));

        verticalLayout_7->addWidget(lineEdit_29);

        layoutWidget_5 = new QWidget(centralWidget);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(252, 38, 21, 381));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_8->setSpacing(25);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        radioButton_6 = new QRadioButton(layoutWidget_5);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setChecked(true);

        verticalLayout_8->addWidget(radioButton_6);

        radioButton_5 = new QRadioButton(layoutWidget_5);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        verticalLayout_8->addWidget(radioButton_5);

        radioButton_4 = new QRadioButton(layoutWidget_5);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout_8->addWidget(radioButton_4);

        radioButton_3 = new QRadioButton(layoutWidget_5);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout_8->addWidget(radioButton_3);

        radioButton_2 = new QRadioButton(layoutWidget_5);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout_8->addWidget(radioButton_2);

        radioButton = new QRadioButton(layoutWidget_5);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout_8->addWidget(radioButton);

        radioButton_7 = new QRadioButton(layoutWidget_5);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));

        verticalLayout_8->addWidget(radioButton_7);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(15, 432, 91, 61));
        lineEdit_IOCName = new QLineEdit(groupBox_3);
        lineEdit_IOCName->setObjectName(QString::fromUtf8("lineEdit_IOCName"));
        lineEdit_IOCName->setGeometry(QRect(8, 28, 79, 25));
        MotorSim->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MotorSim);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 656, 22));
        MotorSim->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MotorSim);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MotorSim->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MotorSim);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MotorSim->setStatusBar(statusBar);

        retranslateUi(MotorSim);

        tabWidget->setCurrentIndex(2);
        comboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MotorSim);
    } // setupUi

    void retranslateUi(QMainWindow *MotorSim)
    {
        MotorSim->setWindowTitle(QCoreApplication::translate("MotorSim", "MotorSim", nullptr));
        label->setText(QString());
        lineEdit->setText(QCoreApplication::translate("MotorSim", "0.006", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MotorSim", "1.492", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("MotorSim", "2.977", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("MotorSim", "4.469", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("MotorSim", "5.940", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("MotorSim", "7.451", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("MotorSim", "8.962", nullptr));
        qelabel->setProperty("variable", QVariant(QCoreApplication::translate("MotorSim", "MyMotor:m1.RBV", nullptr)));
        qelabel->setProperty("defaultStyle", QVariant(QString()));
        qelabel_3->setProperty("variable", QVariant(QCoreApplication::translate("MotorSim", "MyMotor:m1.EGU", nullptr)));
        qelabel_3->setProperty("defaultStyle", QVariant(QString()));
        qepushbutton_3->setText(QCoreApplication::translate("MotorSim", "STOP!", nullptr));
        qepushbutton_3->setProperty("variable", QVariant(QCoreApplication::translate("MotorSim", "MyMotor:m1.STOP", nullptr)));
        qelineedit_4->setText(QCoreApplication::translate("MotorSim", "1.000", nullptr));
        qelineedit_4->setProperty("variable", QVariant(QCoreApplication::translate("MotorSim", "MyMotor:m1.TWV", nullptr)));
        qelineedit_5->setProperty("variable", QVariant(QCoreApplication::translate("MotorSim", "MyMotor:m1.VAL", nullptr)));
        label_11->setText(QCoreApplication::translate("MotorSim", "Position Read", nullptr));
        label_12->setText(QCoreApplication::translate("MotorSim", "Position", nullptr));
        label_13->setText(QCoreApplication::translate("MotorSim", "Tweak", nullptr));
        valueset_1->setText(QCoreApplication::translate("MotorSim", "1", nullptr));
        valueset_01->setText(QCoreApplication::translate("MotorSim", "0.1", nullptr));
        valueset_001->setText(QCoreApplication::translate("MotorSim", "0.01", nullptr));
        valueset_0001->setText(QCoreApplication::translate("MotorSim", "0.001", nullptr));
        valueset_decrease->setText(QCoreApplication::translate("MotorSim", "<", nullptr));
        valueset_increase->setText(QCoreApplication::translate("MotorSim", ">", nullptr));
        label_25->setText(QCoreApplication::translate("MotorSim", "Set", nullptr));
        mmPerRevStep->setProperty("variable", QVariant(QCoreApplication::translate("MotorSim", "MyMotor:m1.MOVN", nullptr)));
        mmPerRevStep->setProperty("defaultStyle", QVariant(QString()));
        mmPerRevStep->setLocalEnumeration(QCoreApplication::translate("MotorSim", "0:\"\", 1:\"Moving\"", nullptr));
        qeradiogroup->setProperty("variable", QVariant(QCoreApplication::translate("MotorSim", "MyMotor:m1.SPMG", nullptr)));
        qeradiogroup->setProperty("title", QVariant(QCoreApplication::translate("MotorSim", "Motor Status Control", nullptr)));
        qelineedit->setProperty("variable", QVariant(QCoreApplication::translate("MotorSim", "MyMotor:m1.MSTA", nullptr)));
        groupBox->setTitle(QCoreApplication::translate("MotorSim", "Motor ID", nullptr));
        radio_MotorID1->setText(QCoreApplication::translate("MotorSim", "m1", nullptr));
        radio_MotorID2->setText(QCoreApplication::translate("MotorSim", "m2", nullptr));
        radioButton_10->setText(QCoreApplication::translate("MotorSim", "m3", nullptr));
        radio_MotorID4->setText(QCoreApplication::translate("MotorSim", "m4", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MotorSim", "Standard Control", nullptr));
        label_17->setText(QCoreApplication::translate("MotorSim", "Max Speed (Rev/s)", nullptr));
        label_18->setText(QCoreApplication::translate("MotorSim", "Speed (Rev/s)", nullptr));
        label_19->setText(QCoreApplication::translate("MotorSim", "Base speed (Rev/s)", nullptr));
        label_20->setText(QCoreApplication::translate("MotorSim", "Accel. time (s)", nullptr));
        label_21->setText(QCoreApplication::translate("MotorSim", "Backlash dist. (mm)", nullptr));
        maxSpeed_disp->setProperty("variable", QVariant(QCoreApplication::translate("MotorSim", "MyMotor:m1.SMAX", nullptr)));
        speed_disp->setProperty("variable", QVariant(QCoreApplication::translate("MotorSim", "MyMotor:m1.S", nullptr)));
        baseSpeed_disp->setProperty("variable", QVariant(QCoreApplication::translate("MotorSim", "MyMotor:m1.SBAS", nullptr)));
        accelTime_disp->setProperty("variable", QVariant(QCoreApplication::translate("MotorSim", "MyMotor:m1.ACCL", nullptr)));
        backlashDist_disp->setProperty("variable", QVariant(QCoreApplication::translate("MotorSim", "MyMotor:m1.BDST", nullptr)));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MotorSim", "Kinematics", nullptr));
        label_26->setText(QCoreApplication::translate("MotorSim", "Units", nullptr));
        qelineedit_8->setProperty("variable", QVariant(QCoreApplication::translate("MotorSim", "MyMotor:m1.EGU", nullptr)));
        qelineedit_9->setText(QCoreApplication::translate("MotorSim", "1600", nullptr));
        qelineedit_9->setProperty("variable", QVariant(QCoreApplication::translate("MotorSim", "MyMotor:m1.SREV", nullptr)));
        label_27->setText(QCoreApplication::translate("MotorSim", "Steps/Rev.", nullptr));
        qelineedit_12->setProperty("variable", QVariant(QCoreApplication::translate("MotorSim", "MyMotor:m1.UREV", nullptr)));
        label_28->setText(QCoreApplication::translate("MotorSim", "Motor Resolution", nullptr));
        label_29->setText(QCoreApplication::translate("MotorSim", "/Rev.", nullptr));
        qelabel_5->setProperty("variable", QVariant(QCoreApplication::translate("MotorSim", "MyMotor:m1.EGU", nullptr)));
        qelabel_5->setProperty("defaultStyle", QVariant(QString()));
        qeradiogroup_4->setProperty("variable", QVariant(QCoreApplication::translate("MotorSim", "MyMotor:m1.DIR", nullptr)));
        qeradiogroup_4->setProperty("title", QVariant(QCoreApplication::translate("MotorSim", " Direction ", nullptr)));
        qeradiogroup_5->setProperty("variable", QVariant(QCoreApplication::translate("MotorSim", "MyMotor:m1.SET", nullptr)));
        qeradiogroup_5->setProperty("title", QVariant(QCoreApplication::translate("MotorSim", "Cal. Status", nullptr)));
        groupBox_2->setTitle(QString());
        unit_cm_2->setText(QCoreApplication::translate("MotorSim", "cm", nullptr));
        unit_mm_2->setText(QCoreApplication::translate("MotorSim", "mm", nullptr));
        qeradiogroup_6->setProperty("variable", QVariant(QCoreApplication::translate("MotorSim", "MyMotor:m1.FOFF", nullptr)));
        qeradiogroup_6->setProperty("title", QVariant(QCoreApplication::translate("MotorSim", "OffSet", nullptr)));
        qelineedit_6->setText(QCoreApplication::translate("MotorSim", "mm", nullptr));
        qelineedit_6->setProperty("variable", QVariant(QCoreApplication::translate("MotorSim", "MyMotor:m1.EGU", nullptr)));
        valueset_decrease_3->setText(QCoreApplication::translate("MotorSim", "<", nullptr));
        valueset_increase_3->setText(QCoreApplication::translate("MotorSim", ">", nullptr));
        valueset_8->setText(QCoreApplication::translate("MotorSim", "1", nullptr));
        valueset_6->setText(QCoreApplication::translate("MotorSim", "0.1", nullptr));
        valueset_9->setText(QCoreApplication::translate("MotorSim", "0.01", nullptr));
        valueset_7->setText(QCoreApplication::translate("MotorSim", "0.001", nullptr));
        qelineedit_13->setProperty("variable", QVariant(QCoreApplication::translate("MotorSim", "MyMotor:m1.UREV", nullptr)));
        comboBox->setItemText(0, QCoreApplication::translate("MotorSim", "1 (top)", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MotorSim", "2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MotorSim", "3", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MotorSim", "4", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MotorSim", "5", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MotorSim", "6", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MotorSim", "7 (bottom)", nullptr));

        lineEdit_8->setText(QCoreApplication::translate("MotorSim", "0.006", nullptr));
        value_apply->setText(QCoreApplication::translate("MotorSim", "Apply", nullptr));
        label_38->setText(QCoreApplication::translate("MotorSim", "1", nullptr));
        label_39->setText(QCoreApplication::translate("MotorSim", "0.1", nullptr));
        label_40->setText(QCoreApplication::translate("MotorSim", "0.01", nullptr));
        label_41->setText(QCoreApplication::translate("MotorSim", "0.001", nullptr));
        label_42->setText(QCoreApplication::translate("MotorSim", "Target\n"
"Positions", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MotorSim", "Calibration", nullptr));
        label_37->setText(QCoreApplication::translate("MotorSim", "Notes", nullptr));
        label_30->setText(QString());
        label_2->setText(QCoreApplication::translate("MotorSim", "Target\n"
"Positions", nullptr));
        label_3->setText(QCoreApplication::translate("MotorSim", "Sample", nullptr));
        lineEdit_23->setText(QCoreApplication::translate("MotorSim", "Collimator", nullptr));
        lineEdit_24->setText(QCoreApplication::translate("MotorSim", "Empty", nullptr));
        lineEdit_25->setText(QCoreApplication::translate("MotorSim", "Empty", nullptr));
        lineEdit_26->setText(QCoreApplication::translate("MotorSim", "Aluminium", nullptr));
        lineEdit_27->setText(QCoreApplication::translate("MotorSim", "Gold", nullptr));
        lineEdit_28->setText(QCoreApplication::translate("MotorSim", "Carbon", nullptr));
        lineEdit_29->setText(QCoreApplication::translate("MotorSim", "Fill in", nullptr));
        radioButton_6->setText(QString());
        radioButton_5->setText(QString());
        radioButton_4->setText(QString());
        radioButton_3->setText(QString());
        radioButton_2->setText(QString());
        radioButton->setText(QString());
        radioButton_7->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("MotorSim", "IOC Name", nullptr));
        lineEdit_IOCName->setText(QCoreApplication::translate("MotorSim", "MyMotor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MotorSim: public Ui_MotorSim {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTORSIM_H
