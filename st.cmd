#!../../bin/linux-x86_64/MyMotor

## You may have to change MyMotor to something else
## everywhere it appears in this file

< envPaths

epicsEnvSet ("STREAM_PROTOCOL_PATH","$(TOP)/db")

## Register all support components
dbLoadDatabase "../../dbd/MyMotor.dbd"
# copy acs dbd to my dbd

MyMotor_registerRecordDeviceDriver(pdbbase)

## Load record instances
dbLoadTemplate "motor.substitutions.mcb4b"
## Set this to see messages from mySub

drvAsynSerialPortConfigure("serial1", "/dev/ttyUSB0", 0, 0, 0)
asynSetOption("serial1", -1, "baud",   19200)
asynSetOption("serial1", -1, "bits",    8)
asynSetOption("serial1", -1, "stop",    1)
asynSetOption("serial1", -1, "parity",  none)
asynOctetSetInputEos("serial1",-1,"\r")
asynOctetSetOutputEos("serial1",-1,"\r")
asynSetTraceIOMask("serial1", -1, 2)

MCB4BSetup(4, 10)
MCB4BConfig(4, serial1)
epicsEnvSet("MCB4B_INIT_COMPLETE", "#")
MCB4BCreateController("MCB4B1", "serial1", 4, 100, 100)

#Test trace
asynSetTraceIOMask("serial1", -1, 2)
asynSetTraceMask("serial1", -1, 9)
asynSetTraceIOMask("MCB4B1", -1, 2)
asynSetTraceMask("MCB4B1", -1, 255)

#IF if the user also defines EPICS_CAS_INTF_ADDR_LIST then beacon address
#list automatic configuration is constrained to the network interfaces specified
#therein, and therefore only the broadcast addresses of the specified LAN interfaces,
#and the destination addresses of all specified point-to-point links, will be automatically configured.
#epicsEnvSet ("EPICS_CAS_INTF_ADDR_LIST","aaa.aaa.aaa.aaa")

# connect to the device ... IP-Address ! Port 2025 used by textronix, see manual
#drvAsynIPPortConfigure("serial1","2.1.52.4:8888",0,0,0)

## Load record instances

dbLoadRecords("$(ASYN)/db/asynRecord.db","P=MyMotor:,R=serial1,PORT=serial1,ADDR=0,OMAX=100,IMAX=100")

#- Set this to see messages from mySub
#var mySubDebug 1

#- Run this to trace the stages of iocInit
traceIocInit


#cd "${TOP}/iocBoot/${IOC}"
iocInit

motorUtilInit("MyMotor:")
## Start any sequence programs
#seq sncExample, "user=enge"

# This IOC does not use save/restore, so set values of some PVs
dbpf("MyMotor:m1.RTRY", "0")
dbpf("MyMotor:m1.TWV", "0.1")
dbpf("MyMotor:m2.RTRY", "0")
dbpf("MyMotor:m2.TWV", "0.1")
dbpf("MyMotor:m3.RTRY", "0")
dbpf("MyMotor:m3.TWV", "0.1")
dbpf("MyMotor:m4.RTRY", "0")
dbpf("MyMotor:m4.TWV", "0.1")
