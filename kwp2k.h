#ifndef KWP2K_DEFINE_H
#define KWP2K_DEFINE_H

#define NR 0x7F //NegativeResponse Service Id

//Definition of Response COde
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
#define DM_STDS 0x10 //StartDiagnosticSession Request Service Id
#define DM_STDSPR 0x50 //StartDiagnosticSession Positive Response Service Id
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
#define DM_TP 0x3E //TesterPresent Reques Service Id
#define DM_TPPR 0x7E //testerPresent Positive Response Service Id
//EcuReset service
#define DM_ER 0x11 //ecuReset Request Service Id
#define DM_ERPR 0x51 //ecuReset Positive Response Service Id
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
#define DT_RDBLI 0x21 //readDataByLocalIdentifier Request Service Id
#define DT_RDBLIPR 0x61 //readDataByLocalIdentifier Positive Response Service Id
//ReadDataByLocalIdentifier service
//Parameter definition
//      RLI_RBD 0x00 reservedByDocument
#define RLI_LIST 0x01 //localIdentifierScalingTable
//      RLI_... 0x02 - 0xEF localIdentifier
//      DDDLI_... 0xF0 - 0xF9 dynamicallyDefinedLocalIdentifier
//      RLI_SSS 0xFA - 0xFE systemSupplierSpecific
//      RLI_RBD 0xFF reservedByDocument

//ReadDataByCommonIdentifier service
#define DT_RDBCI 0x22 //readDataByCommonIdentifier Request Service Id
#define DT_RDBCIPR 0x62 //readDataByCommonIdentifier Positive Response Service Id
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
#define DT_RMBA 0x23 //readMemoryByAddress Request
#define DT_RMBAPR 0x63 //readMemoryByAddress Positive Response

//DynamicallyDefineLocalIdentifier service
#define DT_DDLI 0x2C //dynamicallyDefineLocalIdentifier Request Service Id
#define DT_DDLIPR 0x6C //dynamicallyDefineLocalIdentifier Positive Response SId
//DynamicallyDefineLocalIdentifier service
//Parameter definition
//      DDDLI_RBD reservedByDocument
#define DDDLI_DBLI defineByLocalIdentifier


#endif /* KWP2K_DEFINE_H */
