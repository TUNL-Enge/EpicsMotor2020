#-------------------------------------------------
#
# Project created by QtCreator 2017-04-07T13:21:45
#
#-------------------------------------------------

QT       += core gui xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# Determine EPICS_BASE
_QE_EPICS_BASE = $$(QE_EPICS_BASE)
isEmpty( _QE_EPICS_BASE ) {
    _QE_EPICS_BASE = $$(EPICS_BASE)
    message( QE_EPICS_BASE is not defined. Using EPICS_BASE instead - currently $$_QE_EPICS_BASE )
}

# Check EPICS dependancies
isEmpty( _QE_EPICS_BASE ) {
    error( "EPICS_BASE or QE_EPICS_BASE must be defined. Ensure EPICS is installed and EPICS_BASE or QE_EPICS_BASE is set up." )
}
_EPICS_HOST_ARCH = $$(EPICS_HOST_ARCH)
isEmpty( _EPICS_HOST_ARCH ) {
    error( "EPICS_HOST_ARCH must be defined. Ensure EPICS is installed and EPICS_HOST_ARCH is set up." )
}

TARGET = MotorSim
TEMPLATE = app


SOURCES += main.cpp\
        motorsim.cpp

HEADERS  += motorsim.h

FORMS    += motorsim.ui

INCLUDEPATH += . \
    ./include \
    /home/enge/GUI/EpicsQt/qeframework/include\
    /usr/local/qwt-6.1.3/include/

LIBS += -L$$_QE_EPICS_BASE/lib/$$(EPICS_HOST_ARCH) -lca -lCom
LIBS += -L../../EpicsQt/qeframework/lib/linux-x86_64 -lQEFramework
LIBS += -L../../EpicsQt/qeframework/lib/linux-x86_64/designer -lQEPlugin

DISTFILES += \
    images/TargetLadder.png \
    images/TargetLadderTUNL.png



win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../EpicsQt/qeframework/lib/linux-x86_64/release/ -lQEFramework
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../EpicsQt/qeframework/lib/linux-x86_64/debug/ -lQEFramework
else:unix: LIBS += -L$$PWD/../EpicsQt/qeframework/lib/linux-x86_64/ -lQEFramework

INCLUDEPATH += $$PWD/../EpicsQt/qeframework/lib/linux-x86_64
DEPENDPATH += $$PWD/../EpicsQt/qeframework/lib/linux-x86_64

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../EpicsQt/qeframework/lib/linux-x86_64/designer/release/ -lQEPlugin
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../EpicsQt/qeframework/lib/linux-x86_64/designer/debug/ -lQEPlugin
else:unix: LIBS += -L$$PWD/../EpicsQt/qeframework/lib/linux-x86_64/designer/ -lQEPlugin

INCLUDEPATH += $$PWD/../EpicsQt/qeframework/lib/linux-x86_64/designer
DEPENDPATH += $$PWD/../EpicsQt/qeframework/lib/linux-x86_64/designer

