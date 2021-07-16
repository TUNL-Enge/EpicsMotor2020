TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS BELOW HERE

# xxxRecord.h will be created from xxxRecord.dbd
DBDINC += xxxRecord

# Install xxxSupport.dbd into <top>/dbd
DBD += xxxSupport.dbd

# Build an IOC support library
LIBRARY_IOC += MyMotorSupport

# Compile and add the code to the support library
MyMotorSupport_SRCS += xxxRecord.c
MyMotorSupport_SRCS += devXxxSoft.c


# Link locally-provided code into the support library,
# rather than directly into the IOC application.
# This is required for Windows DLL builds.
MyMotorSupport_SRCS += dbSubExample.c
MyMotorSupport_SRCS += MyMotorHello.c
MyMotorSupport_SRCS += initTrace.c

MyMotorSupport_LIBS += $(EPICS_BASE_IOC_LIBS)


# Build the IOC application
PROD_IOC = MyMotor

# MyMotor.dbd will be created and installed
DBD += MyMotor.dbd

# MyMotor.dbd will include these files:
MyMotor_DBD += base.dbd
MyMotor_DBD += motorSupport.dbd
MyMotor_DBD += xxxSupport.dbd
DBD += devAcsMotor.dbd

MyMotor_DBD += dbSubExample.dbd
MyMotor_DBD += MyMotorHello.dbd
MyMotor_DBD += initTrace.dbd
MyMotor_DBD += devAcsMotor.dbd
	

# MyMotor_registerRecordDeviceDriver.cpp derives from MyMotor.dbd
MyMotor_SRCS += MyMotor_registerRecordDeviceDriver.cpp
MyMotor_SRCS += MCB4BDriver.cpp
# Build the main IOC entry point where needed
MyMotor_SRCS_DEFAULT += MyMotorMain.cpp
MyMotor_SRCS_vxWorks += -nil-

# Link in the code from our support library
MyMotor_LIBS += MyMotorSupport
MyMotor_LIBS += stream
MyMotor_LIBS += asyn
MyMotor_LIBS += motor
MyMotor_LIBS += Acs
#MyMotor_LIBS += Acs
# To build SNL programs, SNCSEQ must be defined
# in the <top>/configure/RELEASE file
ifneq ($(SNCSEQ),)
    # Build sncExample into MyMotorSupport
    sncExample_SNCFLAGS += +r
    MyMotor_DBD += sncExample.dbd
    # A .stt sequence program is *not* pre-processed:
    MyMotorSupport_SRCS += sncExample.stt
    MyMotorSupport_LIBS += seq pv
    MyMotor_LIBS += seq pv

    # Build sncProgram as a standalone program
    PROD_HOST += sncProgram
    sncProgram_SNCFLAGS += +m
    # A .st sequence program *is* pre-processed:
    sncProgram_SRCS += sncProgram.st
    sncProgram_LIBS += seq pv
    sncProgram_LIBS += $(EPICS_BASE_HOST_LIBS)
endif

# Finally link IOC to the EPICS Base libraries
MyMotor_LIBS += $(EPICS_BASE_IOC_LIBS)

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD EXTRA GNUMAKE RULES BELOW HERE

