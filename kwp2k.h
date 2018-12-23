#ifndef KWP2K_DEFINE_H
#define KWP2K_DEFINE_H

#define SI_NR 0x7F //NegativeResponse Service Id

//Definition of Response Code
//	RC_RBD 0x00 ReservedByDocument
#define RC_GR 0x10 //GeneralReject
#define RC_SNS 0x11 //ServiceNotSupported
#define RC_SFNS_IF 0x12 //SubFunctionNotSupported-InvalidFormat
#define RC_B_RR 0x21 //Busy-RepeatRequest
#define RC_CNCORSE 0x22 //ConditionNotCorrectOrRequestSequenceError
#define RC_RNC 0x23 //Routine NotCompleteOrServiceInProgress
#define RC_ROOR 0x31 //RequestOutOfRange
#define RC_SAD_SAR 0x33 //SecurityAccessDenied-SecurityAccessRequested
#define RC_IK 0x35 //InvalidKey
#define RC_ENOA 0x36 //ExceedNumberOfAttempts
#define RC_RTDNE 0x37 //RequiredTimeDelayNotExpireds
#define RC_DNA 0x40 //DownloadNotAccepted
#define RC_IDT 0x41 //ImproperDownloadType
#define RC_CNDTSA 0x42 //CanNotDownloadToSpecifiedAddress
#define RC_CNDNOBR 0x43 //CanNotDownloadNumberOfBytesRequested
#define RC_UNA 0x50 //uploadNotAccepted
#define RC_IUT 0x51 //ImproperUploadType
#define RC_CNUFSA 0x52 //CanNotUploadFromSpecifiedAddress
#define RC_CNUNOBR 0x53 //CanNotUploadNumberOfBytesRequested
#define RC_TS 0x71 //TransferSuspended
#define RC_TA 0x72 //TransferAborted
#define RC_IAIBT 0x74 //IllegalAddressInBlockTransfer
#define RC_IBCIBT 0x75 //IllegalByteCountInBlockTransfer
#define RC_IBTT 0x76 //IllegalBlockTransferType
#define RC_BTDCE 0x77 //BlockTransferDataChecksumError
#define RC_RCR_RP 0x78 //RequestCorrectlyReceived-ResponsePending
#define RC_IBCDBT 0x79 //IncorrectByteCountDuringBlockTransfer
#define RC_SNSIADS 0x80 //ServiceNotSupportedInActiveDiagnosticSession
//	RC_RBD 0x81 - 0x8F ReservedByDocument
//	RC_VMS 0x90 - 0xF9 VehicleManufacturerSpecific
//	RC_SSS 0xFA - 0xFE SystemSypplierSpecific
//	RC_RBD 0xFF ReservedByDocument

//Scaling Byte
//ScallingByte High NIbble
#define SB_USN 0x00 //UnSignedNumeric (1 to 4 bytes)
#define SB_SN 0x10 //SignedNumeric (1 to 4 bytes)
#define SB_BMR_WOM 0x20 //BItMappedReportedWithOutMask
#define SB_BMR_WM 0x30 //BitMappedReportedWithMask
#define SB_BCD 0x40 //BinaryCodedDecimal
#define SB_SEV 0x50 //StateEncodedVariable (1 byte)
#define SB_ASCII 0x60 //ASCII (1 to 15 bytes for each scallingByte)
#define SB_SFP 0x70 //SignedFloatingPoint
#define SB_P 0x80 //Packet
#define SB_F 0x90 //Formula
#define SB_U 0xA0 //Unit/Format
#define SB_USNWI 0xB0 //UnSignedNumericWithIndication (1 to 4 bytes)
//	SB_VMS 0xC0 - 0xE0 VehicleManufacturerSpecific
//	SB_RBD 0xF0 ReservedByDocument

//ScallingByte Low Nibble
#define SB_NROBOP 0x0F //Mask of NumberOfBytesOfParameter

//Scalling Byte Extentions
//Formula Identifiers Extention
// d = /; m = *; b = (); a = +;
#define SB_FI_C0mXaC1 0x00 //y = C0 * x + C1
#define SB_FI_C0mbXaC1b 0x01 //y = C0 * (x + C1)
#define SB_FI_C0dbXaC1baC2 0x02 //y = C0 / (x + C1) + C2
#define SB_FI_XdC0aC1 0x03 //y = x/C0 + C1
#define SB_FI_bXaC0bdC1 0x04 // y = (x + C0) / C1
#define SB_FI_bXaC0bdC1aC2 0x05// y = (x + C0) / C1 + C2
#define SB_FI_C0mX 0x06 //y = C0 * x
#define SB_FI_XdC0 0x07 // y = x / C0
#define SB_FI_XaC0 0x08 // y = x + C0
#define SB_FI_XmC0dC1 0x09 // y = x * C0 / C1
//	SB_FI_RBD 0A - 7F Reserved by document
//	SB_FI_VMS 80 - FF Vehicle manufacture specific

//Unit and Format Identifiers Extention
#define SB_UFI_NUNP 0x00 //No unit,no prefix
#define SB_UFI_METER 0x01 // meter, m, length
#define SB_UFI_FOOT 0x02 // foot, ft, length
#define SB_UFI_INCH 0x03 // inch, in, length
#define SB_UFI_YARD 0x04 // yard, yd, length
#define SB_UFI_MILE 0x05 //mile (English), mi, length
#define SB_UFI_GRAM 0x06 //gram, g, mass
#define SB_UFI_TON 0x07 //ton (Metric), t, mass
#define SB_UFI_SECOND 0x08 //second, s, time
#define SB_UFI_MINUTE 0x09 //minute, min, time
#define SB_UFI_HOUR 0x0A //hour, h, time
#define SB_UFI_DAY 0xB //day, d, time
#define SB_UFI_YEAR 0x0C //year, y, time
#define SB_UFI_AMPERE 0x0D //ampere, A, current
#define SB_UFI_VOLT 0x0E //volt, V, voltage
#define SB_UFI_COULOMB 0x0F //coulomb, C, electric charge
#define SB_UFI_OHM 0x10 //ohm, W, resistance
#define SB_UFI_FARAD 0x11 //farad, F, capacitance
#define SB_UFI_HENRY 0x12 //henry, H, inductance
#define SB_UFI_SIEMENS 0x13 //siemens, S, electric conductance
#define SB_UFI_WEBER 0x14 //weber, Wb, magnetic flux
#define SB_UFI_TESLA 0x15 //tesla, T, magnetic flux density
#define SB_UFI_KELVIN 0x16 //kelvin, K, thermodynamic temperature
#define SB_UFI_CELSIUS 0x17 //celsius,�C, thermodynamic temperature
#define SB_UFI_FAHRENHEIT 0x18 //fahrenheit, F, thermodynamic temperature
#define SB_UFI_CANDELA 0x19 //candela, cd, luminous intensity
#define SB_UFI_RADIAN 0x1A //radian, rad, plane angle
#define SB_UFI_DEGREE 0x1B //degree, �, plane angle
#define SB_UFI_HERTZ 0x0C //hertz, Hz, frequency
#define SB_UFI_JOULE 0x1D //joule, J, energy
#define SB_UFI_NEWTON 0x1E //newton, N, force
#define SB_UFI_KILOPOND 0x1F //kilopond, kp, force
#define SB_UFI_POUND_FORCE 0x20 //pound force, lbf, force
#define SB_UFI_WATT 0x21 //watt, W, power
#define SB_UFI_HORSE_POWER_METRIC 0x22 //horse power (metric), hk, power
#define SB_UFI_HORSE_POWER_UK_US 0x23 //horse power (UK and US), hp, power
#define SB_UFI_PASCAL 0x24 //pascal, Pa, pressure
#define SB_UFI_BAR 0x25 //bar, bar, pressure
#define SB_UFI_ATMOSPHERE 0x26 //atmosphere, atm, pressure
#define SB_UFI_POUND_FORCE_PER_SQUARE_INCH 0x27 //pound force per square inch, psi, pressure
#define SB_UFI_BECQEREL 0x28 //becqerel, Bq, radiactivity
#define SB_UFI_LUMEN 0x29 //lumen, lm, light flux
#define SB_UFI_LUX 0x2A //lux, lx, illuminance
#define SB_UFI_LITER 0x2B //liter, l, volume
#define SB_UFI_GALLON_UK 0x2C //gallon UK, volume
#define SB_UFI_GALLON_US 0x2D //gallon, US, volume
#define SB_UFI_CUBIC_INCH 0x2E //cubic inch, cu in, volume
#define SB_UFI_METER_PER_SECOND 0x2F //meter per second, m/s, speed
#define SB_UFI_KILOMETER_PER_HOUR 0x30 //kilometer per hour, km/h, speed
#define SB_UFI_MILE_PER_HOUR 0x31 //mile per hour, mph, speed
#define SB_UFI_REVOLUTIONS_PER_SECOND 0x32 //revolutions per second, rps, angular velocity
#define SB_UFI_REVOLUTIONS_PER_MINUTE 0x33 //revolutions per minute, rpm, angular velocity
#define SB_UFI_COUNTS 0x34 //counts
#define SB_UFI_PERCENT 0x35 //percent, %
#define SB_UFI_MILLIGRAM_PER_STROKE 0x36 //milligram per stroke, mg/stroke, mass per engine stroke
#define SB_UFI_METER_PER_SQUARE_SECOND 0x37 //meter per square second, m/s^2, acceleration
#define SB_UFI_NEWTON_METER 0x38 //newton meter, Nm, moment (e.g. torsion moment)
//	SB_UFI_RBD 0x39 - 0x3F Reserved by document
#define SB_UFI_EXA 0x40 //exa(prefix), E, 10^18
#define SB_UFI_PETA 0x41 //peta(prefix), P, 10^15
#define SB_UFI_TERA 0x42 //tera(prefix), T, 10^12
#define SB_UFI_GIGA 0x43 //giga(prefix), G, 10^9
#define SB_UFI_MEGA 0x44 //mega(prefix), M, 10^6
#define SB_UFI_KILO 0x45 //kilo(prefix), k, 10^3
#define SB_UFI_HECTO 0x46 //hecto(prefix), h, 10^2
#define SB_UFI_DECA 0x47  //deca(prefix), da, 10
#define SB_UFI_DECI 0x48 //deci(prefix), d, 10^-1
#define SB_UFI_CENTI 0x49 //centi(prefix), c, 10^-2
#define SB_UFI_MILLI 0x4A //milli(prefix), m, 10^-3
#define SB_UFI_MICRO 0x4B //micro(prefix), m, 10^-6
#define SB_UFI_NANO 0x4C //nano(prefix), n, 10^-9
#define SB_UFI_PICO 0x4D //pico(prefix), p, 10^-12
#define SB_UFI_FEMTO 0x4E //femto(prefix), f, 10^-15
#define SB_UFI_ATTO 0x4F //atto(prefix), a, 10^-18
#define SB_UFI_DATE1 0x50 //Date1, Year-Month-Day
#define SB_UFI_DATE2 0x51 //Date2, Day/Month/Year
#define SB_UFI_DATE3 0x52 //Date3, Month/Day/Year
#define SB_UFI_WEEK 0x53 //week, W, calendar week
#define SB_UFI_TIME1 0x54 //UTC Hour/Minute/second
#define SB_UFI_TIME2 0x55 //Hour/Minute/Second
#define SB_UFI_DATEANDTIME1 0x56 //Second/Minute/Hour/Day/Month/Year
#define SB_UFI_DATEANDTIME2 0x57 //Second/Minute/Hour/Day/Month/Year/Local minute offset/Local hour offset
//	SB_UFI_RBD 0x58 - 0x7F Reserved by document
//	SB_UFI_VMS 0x80 - 0xFF Vehicle manufacturer specific

//Diagnostic Management

//StartDiagnosticSession service
#define SI_STDS 0x10 //StartDiagnosticSession Request Service Id
#define SI_STDSPR 0x50 //StartDiagnosticSession Positive Response Service Id

//Diagnostic Session
//	DCS_RBD 0x00 - 0x80 ReservedByDocument
#define DCS_SS 0x81 //StandartSession
#define DCS_PT 0x82 //PeriodicTransmission
//	DCS_RBD 0x83 - 0x84 ReservedByDocument
#define DCS_PS 0x85 //ProgrammingSession
#define DCS_DS 0x86 //DevelopmentSession
#define DCS_AS 0x87 //AdjustmentSession
//	DCS_RBD 0x88 ReservedByDocument
//	DCS_VMSS 0x89 - 0xF9 VehicleManufacturerSpecificSession
//	DCS_SSSS 0xFA - 0xFE SystemSupplierSpecificSession

//SecurityAccesss service not Defined

//TesterPresent Service
#define SI_TP 0x3E //TesterPresent Request Service Id
#define SI_TPPR 0x7E //testerPresent Positive Response Service Id

//EcuReset service
#define SI_ER 0x11 //ecuReset Request Service Id
#define SI_ERPR 0x51 //ecuReset Positive Response Service Id

//EcuReset service
//Parameter definition
//      RM_RBD 0x00 reservedByDocument
#define RM_PO 0x01 //powerOn
//      RM_RBD 0x02 reservedByDocument
#define RM_KO 0x03 //keyOn
//      RM_RBD 0x04 - 0x7F reservedByDocument
#define RM_RS 0x80 //sendResetStatus
//      RM_VMS 0x81 - 0xF9 vehicleManufacturerSpecific
//      RM_SSS 0xFA - 0xFE systemSupplierSpecific
//      RM_RBD 0xFF reservedByDocument

//ReadEcuIdentification service
#define DM_REI 0x1A
#define DM_REIPR 0x5A
//ReadEcuIdentification service
//Parameter definition
#define IO_ECUIDT 0x80 //ECUIdentificationDataTable
#define IO_ECUIST 0x81 //ECUIdentificationScalingTable
//      IO_RBD 0x82 - 0x85 reservedByDocument
//      IO_VMS_ 0x86 vehicleManufacturerSpecific
#define IO_VMSPN 0x87 //vehicleManufacturerSparePartNumber
#define IO_VMECUSN 0x88 //vehicleManufacturerECUSoftwareNumber
#define IO_VMECUSVN 0x89 //vehicleManufacturerECUSoftwareVersionNumber
#define IO_SS 0x8A //systemSupplier
#define IO_ECUMD 0x8B //ECUManufacturingDate
#define IO_ECUSN 0x8C //ECUSerialNumber
//      IO_SSS_ 0x8D - 0x8F systemSupplierSpecific
#define IO_VIN 0x90 //VIN (Vehicle Identification Number)
#define IO_VMECUHN 0x91 //vehicleManufacturerECUHardwareNumber
#define IO_SSECUHN 0x92 //systemSupplierECUHardwareNumber
#define IO_SSECUHVN 0x93 //systemSupplierECUHardwareVersionNumber
#define IO_SSECUSN 0x94 //systemSupplierECUSoftwareNumber
#define IO_SSECUSVN 0x95 //systemSupplierECUSoftwareVersionNumber
#define IO_EROTAN 0x96 //exhaustRegulationOrTypeApprovalNumber
#define IO_SNOET 0x97 //systemNameOrEngineType
#define IO_RSCOTSN 0x98 //repairShopCodeOrTesterSerialNumber
#define IO_PD 0x99 //programmingDate
#define IO_CRSCOCESN 0x9A //calibrationRepairShopCodeOrCalibrationEquipmentSerialNumber
#define IO_CD 0x9B //calibrationDate
#define IO_CESN 0x9C //calibrationEquipmentSoftwareNumber
#define IO_ECUID 0x9D //ECUInstallationDate
//      IO_VMS_ 9E - AF vehicleManufacturerSpecific
//      IO_SSS B0 - BF systemSupplierSpecific


//Data Transmission functional unit

//ReadDataByLocalIdentifier service
#define SI_RDBLI 0x21 //readDataByLocalIdentifier Request Service Id
#define SI_RDBLIPR 0x61 //readDataByLocalIdentifier Positive Response Service Id

//ReadDataByLocalIdentifier service
//Parameter definition
//      RLI_RBD 0x00 reservedByDocument
#define RLI_LIST 0x01 //localIdentifierScalingTable
//      RLI_... 0x02 - 0xEF localIdentifier
//      DDDLI_... 0xF0 - 0xF9 dynamicallyDefinedLocalIdentifier
//      RLI_SSS 0xFA - 0xFE systemSupplierSpecific
//      RLI_RBD 0xFF reservedByDocument

//ReadDataByCommonIdentifier service
#define SI_RDBCI 0x22 //readDataByCommonIdentifier Request Service Id
#define SI_RDBCIPR 0x62 //readDataByCommonIdentifier Positive Response Service Id

//ReadDataByCommonIdentifier service
//Parameter definition
//      DCI_RBD reservedByDocument
#define RCI_CIST 0x0001 //commonIdentifierScalingTable
//      RCI_... 0x0002 - 0x007F commonIdentifier
//      IO_... 0x0080 - 0x00BF identificationOption
//      RCI_... 0x00C0 - 0xEFFF commonIdentifier
//      RCI_SSS 0xF000 - 0xFFFE systemSupplierSpecific
//      RCI_RBD 0xFFFF reservedByDocument

//ReadMemoryByAddress service
#define SI_RMBA 0x23 //readMemoryByAddress Request
#define SI_RMBAPR 0x63 //readMemoryByAddress Positive Response

//DynamicallyDefineLocalIdentifier service
#define SI_DDLI 0x2C //dynamicallyDefineLocalIdentifier Request Service Id
#define SI_DDLIPR 0x6C //dynamicallyDefineLocalIdentifier Positive Response SId

//DynamicallyDefineLocalIdentifier service
//Parameter definition
//      DNM_RBD reservedByDocument
#define DNM_DBLI 0x01 defineByLocalIdentifier
#define DNM_DBCI 0x02 defineByCommonIdentifier
#define DNM_DBMA 0x03 defineByMemoryAddress
#define DNM_CDDDLI 0x04 clearDynamicallyDefinedLocalIdentifier
//      DNM_RBD 0x05 - 0x7F reservedByDocument
//      DNM_VMS 0x80 vehicleManufacturerSpecific
#define DNM_DBIOLI 0x81 defineByInputOutputLocalIdentifier
#define DNM_DBIOCI 0x82 defineByInputOutputCommonIdentifier
//      DNM_VMS 0x83 - 0xF9 vehicleManufacturerSpecific
//      DNM_SSS 0xFA - 0xFE systemSupplierSpecific
//      DNM_RBD 0xFF reservedByDocument

//WriteDataByLocalIdentifier service
#define SI_WDBLI 0x3B //writeDataByLocalIdentifier Request Service Id
#define SI_WDBLIPR 0x7B //writeDataByLocalIdentifier Positive Response Service Id


//WriteDataByCommonIdentifier service
#define SI_WDBCI 0x2E //writeDataByCommonIdentifier Request Service Id
#define SI_WDBCIPR 0x6E //writeDataByCommonIdentifier Positive Response Service Id

//WriteMemoryByAddress service
#define SI_WMBA 0x3D //writeMemoryByAddress Request Service Id
#define SI_WMBAPR 0x7D //writeMemoryByAddress Positive Response Service Id

//Stored Data Transmission functional unit

//ReadDiagnosticTroubleCodes service

//ReadDiagnosticTroubleCodesByStatus service
#define SI_RDTCBS 0x18 //readDiagnosticTroubleCodesByStatus Request SId
#define SI_RDTCBSPR 0x58 //readDiagnosticTroubleCodesByStatus Pos. Response SId

//ReadDiagnosticTroubleCodesByStatus service
//Request parameter definition
//      SODTCRQ_RBD 0x00 - 0x01 reservedByDocument
#define SODTCRQ_RSDTCAS 0x02 //requestStoredDTCAndStatus
#define SODTCRQ_RADTCAS 0x03 //requestAllDTCAndStatus
//      SODTCRQ_RBD 0x04 - 0x10 reservedByDocument
#define SODTCRQ_RPDTCAS 0x11 //requestPendingDTCAndStatus
//      SODTCRQ_RBD 0x12 - 0xEF reservedByDocument
//      SODTCRQ_VMS 0xF0 - 0xF9 vehicleManufacturerSpecific
//      SODTCRQ_SSS 0xFA - 0xFE systemSupplierSpecific
#define SODTCRQ_RSBS 0xFF //requestStatusBitsSupported

//      GODTC_SDTC 0x0000 - 0xFFFE specificDTC
#define GODTC_ADTC 0xFFFF //allDTCs

#define SODTC_PFP (1<<0) //pendingFaultPresent      '0' = pending fault is not present
//                                                  '1' = pending fault is present

#define SODTC_PFS (1<<1) //pendingFaultState        '0' = pending fault has not been present during this driving cycle
//                                                  '1' = pending fault has been present during this driving cycle

#define SODTC_TRU (1<<2) //testRunning              '0' = test is not running
//                                                  '1' = test is running

#define SODRC_TI (1<<3) //testInhibit               '0' = test is not inhibited by other DTC
//                                                  '1' = test is inhibited by other DTC

#define SODRC_TRE (1<<4) //testReadiness            '0' = test has been completed
//                                                  '1' = test has not been completed

#define SODRC_DTCSS (1<<5) //DTCStorageState        ‘0’ = DTC not validated and not stored in non volatile memory
//                                                  ‘1’ = DTC validated and stored in non volatile memory.

#define SODRC_VFP (1<<6) //validatedFaultPresent    ‘0’ = no validated fault present or fault has been validated as not present at time of request.
//                                                  ‘1’ = validated fault present at time of request.

#define SODRC_VFS (1<<7) //validatedFaultState      '0' = validated fault has not been present during this driving cycle
//                                                  '1' = validated fault has been present during this driving cycle

//ReadStatusOfDiagnosticTroubleCodes service
#define SI_RSODTC 0x17 //readStatusOfDiagnosticTroubleCodes Request SId
#define SI_RSODTCPR 0x57 //readStatusOfDiagnosticTroubleCodes Positive Response SId

//ReadFreezeFrameData service
#define SI_RFFD 0x12 //readFreezeFrameData Request Service Id
#define SI_RFFDPR 0x52 //readFreezeFrameData Positive Response Service Id

//ReadFreezeFrameData service
//Parameter definition
#define FFNR_OFFDR 0x00 //OBDIIFreezeFrame
//      FFNR_FFDR 0x01 - 0xFE freezeFrame
#define FFNR_AFFDR 0xFF //allFreezeFrames

#define RAMI_RAD 0x00 //requestAllData
#define RAMI_RBRLI 0x01 //requestByRecordLocalIdentifier
#define RAMI_RBRCI 0x02 //requestByRecordCommonIdentifier
#define RAMI_RBMA 0x03 //requestByMemoryAddress
#define RAMI_RBDTC 0x04 //requestByDTC
//      RAMI_RBD 0x05 - 0x7F reservedByDocument
#define RAMI_DTCTCFFS 0x80 //DTCThatCausedFreezeFrameStorage
#define RAMI_RBIOLI 0x81 //requestByInputOutputLocalIdentifier
#define RAMI_RBIOCI 0x82 //requestByInputOutputCommonIdentifier
#define RAMI_RFFDS 0x83 //requestFreezeFrameDataStructure
//      RAMI_VMS 0x84 - 0xF9 vehicleManufacturerSpecific
//      RAMI_SSS 0xFA - 0xFE systemSupplierSpecific
//      RAMI_RBD 0xFF reservedByDocument

//      LI_... 0x01 - 0xFE recordLocalIdentifier
//      IOLI_... 0x01 - 0xFE inputOutputLocalIdentifier
//      DTC_... 0x0000 This value is used in the readFreezeFramData positive 
//                          response message to indicate that no freeze frame data is stored in server’s
//      DTC_... 0x0001 - 0xFFFE This range of values identifies a record 
//                                  which includes the data within a freeze frame referenced by a DTC
//      DTC_... 0xFFFF This value is used in the readFreezeFramData positive response message
//                          when recordAccessMethodIdentifer = requestFreezeFrameDataStructure to
//                          indicate that the reported Freeze Frame Data structure table is used for all
//                          DTCs in this server (ECU).
//      CI_... 0001 - FFFE recordCommonIdentifier
//      IOCI_... 0001 - FFFE inputOutputCommonIdentifier

//      PIT_RBD 0x00 reservedByDocument
//      PIT_RLI 0x01 recordLocalIdentifier “Definition of recordLocalIdentifier values”
//      PIT_RCI 0x02 recordCommonIdentifier “Definition of recordCommonIdentifier values”
//      PIT_RBD 0x03 - 0x80 reservedByDocument
//      PIT_IOLI 0x81 inputOutputLocalIdentifier “Definition of inputOutputLocalIdentifier values”
//      PIT_IOCI 0x82 inputOutputCommonIdentifier “Definition of inputOutputCommonIdentifier values”
//      PIT_RBD 0x83 - 0xFF reservedByDocument


//ClearDiagnosticInformation service
#define SI_CDI 0x14 //clearDiagnosticInformation Request Service Id
#define SI_CDIPR 0x54 //clearDiagnosticInformation Positive Response SId

//InputOutput Control functional unit

//InputOutputControlByLocalIdentifier service
#define SI_IOCBLI 0x30 //inputOutputControlByLocalIdentifier Request SId
#define SI_IOCBLIPR 0x70 //inputOutputControlByLocalIdentifier Positive Response SId

//InputOutputControlByLocalIdentifier service
//Parameter definition
//      IOLI_RBD 0x00 reservedByDocument
//      IOLI_... 0x01 - 0xF9 inputOutputLocalIdentifier
//      IOLI_SSS 0xFA - 0xFE systemSupplierSpecific
//      IOLI_RBD 0xFF reservedByDocument

#define IOCP_RCTECU 0x00 //returnControlToECU
#define IOCP_RCS 0x01 //reportCurrentState
#define IOCP_RIOC 0x02 //reportIOConditions
#define IOCP_RIOS 0x03 //reportIOScaling
#define IOCP_RTD 0x04 //resetToDefault
#define IOCP_FCS 0x05 //freezeCurrentState
#define IOCP_ECO 0x06 //executeControlState
#define IOCP_STA 0x07 //shortTermAdjustment
#define IOCP_LTA 0x08 //longTermAdjustment
#define IOCP_RIOCP 0x09 //reportIOCalibrationParameters
//      IOCP_VMS 0x0A - 0xF9 vehicleManufacturerSpecific
//      IOCP_SSS 0xFA - 0xFE systemSupplierSpecific
//      IOCP_RBD 0xFF reservedByDocument

//InputOutputControlByCommonIdentifier service
#define SI_IOCBCID 0x2F //inputOutputControlByCommonIdentifier Request SId
#define SI_IOCBCIDPR 0x6F //inputOutputControlByCommonIdentifier Positive Resp. SId

//InputOutputControlByCommonIdentifier service
//Parameter definition
//      RBD 0x0000 reservedByDocument
//      IOCI_ 0x0001 - 0xEFFF inputOutputCommonIdentifier
//      SSS 0xF000 - 0xFFFE systemSupplierSpecific
//      RBD 0xFFFF reservedByDocument

//Remote Activation Of Routine functional unit

//StartRoutineByLocalIdentifier service
#define SI_STRBLI 0x31 //startRoutineByLocalIdentifier Request Service Id
#define SI_STRBLIPR 0x71 //startRoutineByLocalIdentifier Positive Response SId

//StartRoutineByLocalIdentifier service
//Parameter definition
//      RBD 0x00 reservedByDocument
//      RELI_... 0x01 - 0xF9 routineLocalIdentifier
//      SSS 0xFA - 0xFE systemSupplierSpecific
//      RBD 0xFF reservedByDocument

//StartRoutineByAddress service
#define SI_STRBA 0x38 //startRoutineByAddress Request Service Id
#define SI_STRBAPR 0x78 //startRoutineByAddress Positive Response Service Id

//StopRoutineByLocalIdentifier service
#define SI_SPRBLI 0x32 //stopRoutineByLocalIdentifier Request Service Id
#define SI_SPRBLIPR 0x72 //stopRoutineByLocalIdentifier Positive Response

//StopRoutineByLocalIdentifier service
//Parameter definition
//      RETS_RBD 0x00 - 0x60 reservedByDocument
#define RETS_NEWRA 0x61 //normalExitWithResultsAvailable
#define RETS_NEWORA 0x62 //normalExitWithoutResultsAvailable
#define RETS_AEWRA 0x63 //abnormalExitWithResultsAvailable
#define RETS_AEWORA 0x64 //abnormalExitWithoutResultsAvailable
//      RETS_RBD 0x65 - 0x7F reservedByDocument
//      RETS_VMS 0x80 - 0xF9 vehicleManufacturerSpecific
//      RETS_SSS 0xFA - 0xFE systemSupplierSpecific
//      RETS_RBD 0xFF reservedByDocument

//StopRoutineByAddress service
#define SI_SPRBA 0x39 //stopRoutineByAddress Request Service Id
#define SI_SPRBAPR 0x79 //stopRoutineByAddress Positive Response Service Id

//RequestRoutineResultsByLocalIdentifier service
#define SI_RRRBLI 0x33 //requestRoutineResultsByLocalIdentifier Request Service Id
#define SI_RRRBLIPR 0x73 //requestRoutineResultsByLocalIdentifier Pos. Resp. Service Id


//RequestRoutineResultsByAddress service
#define SI_RRRBA 0x3A //requestRoutineResultsByAddress Request Service Id
#define SI_RRRBA 0x7A //requestRoutineResultsByAddress Positive Response Service Id

//Upload Download functional unit

//RequestDownload service
#define SI_RD 0x34 //requestDownload Request Service Id
#define SI_RDPR 0x74 //requestDownload Positive Response Service Id

//RequestDownload service
// Parameter definition
#define DFI_UCUE 0x00 //unCompressed unEncrypted
//      DFI_UC 0x0X unCompressed
//      DFI_C_... 0x1X - 0xFX Compression Methods
//      DFI_UE 0xX0 unEncrypted
//      DFI_E_... 0xX1 - XF Encrypting Methods

//RequestUpload service
#define SI_RU 0x35 //requestUpload Request Service Id
#define SI_RUPR 0x75 //requestUpload Positive Response Service Id

//RequestUpload service
// Parameter definition
#define DFI_UCUE 0x00 //unCompressed unEncrypted
//      DFI_UC 0x0X unCompressed
//      DFI_C_... 0x1X - 0xFX Compression Methods
//      DFI_UE 0xX0 unEncrypted
//      DFI_E_... 0xX1 - XF Encrypting Methods

//TransferData service
#define SI_TD 0x36 //transferData Request Service Id
#define SI_TDPR 0x76 //transferData Positive Response Service Id

//RequestTransferExit service
#define SI_RTE 0x37 //requestTransferExit Request Service Id
#define SI_RTEPR 0x77 //requestTransferExit Positive Response Service Id



#endif /* KWP2K_DEFINE_H */
