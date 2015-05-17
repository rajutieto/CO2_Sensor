#ifndef __REGISTERLIST_H
#define	__REGISTERLIST_H


#define EEP_BASE_ADDRESS			0X7C00




typedef enum
{
	EEP_SERIALNUMBER_LOWORD = EEP_BASE_ADDRESS,
	EEP_SERIALNUMBER_HIWORD = EEP_BASE_ADDRESS + 2,
	EEP_VERSION_NUMBER_LO = 	EEP_BASE_ADDRESS + 4,
	EEP_VERSION_NUMBER_H = 		EEP_BASE_ADDRESS + 6,
	EEP_ADDRESS	= 						EEP_BASE_ADDRESS + 8,
	EEP_PRODUCT_MODEL = 			EEP_BASE_ADDRESS + 10,
	EEP_HARDWARE_REV	= 			EEP_BASE_ADDRESS + 12,

	EEP_UPDATE_STATUS =				EEP_BASE_ADDRESS + 14, 

	EEP_FAC_CO2_CAL_AD1	 =        EEP_BASE_ADDRESS + 16, 
	EEP_FAC_CO2_CAL_PPM1 =        EEP_BASE_ADDRESS + 18,
	EEP_FAC_CO2_CAL_AD2	 =        EEP_BASE_ADDRESS + 20, 
	EEP_FAC_CO2_CAL_PPM2 =        EEP_BASE_ADDRESS + 22,
	EEP_FAC_CO2_CAL_AD3	 =        EEP_BASE_ADDRESS + 24, 
	EEP_FAC_CO2_CAL_PPM3 =        EEP_BASE_ADDRESS + 26,
	EEP_FAC_CO2_CAL_AD4	 =        EEP_BASE_ADDRESS + 28, 
	EEP_FAC_CO2_CAL_PPM4 =        EEP_BASE_ADDRESS + 30,
	EEP_FAC_CO2_CAL_AD5	 =        EEP_BASE_ADDRESS + 32, 
	EEP_FAC_CO2_CAL_PPM5 =        EEP_BASE_ADDRESS + 34,
	EEP_FAC_CO2_CAL_AD6	 =        EEP_BASE_ADDRESS + 36, 
	EEP_FAC_CO2_CAL_PPM6 =        EEP_BASE_ADDRESS + 38,
	EEP_FAC_CO2_CAL_AD7	 =        EEP_BASE_ADDRESS + 40, 
	EEP_FAC_CO2_CAL_PPM7 =        EEP_BASE_ADDRESS + 42,
	EEP_FAC_CO2_CAL_AD8	 =        EEP_BASE_ADDRESS + 44, 
	EEP_FAC_CO2_CAL_PPM8 =        EEP_BASE_ADDRESS + 46,
	EEP_FAC_CO2_CAL_AD9	 =        EEP_BASE_ADDRESS + 48, 
	EEP_FAC_CO2_CAL_PPM9 =        EEP_BASE_ADDRESS + 50,
	EEP_FAC_CO2_CAL_AD10	 =      EEP_BASE_ADDRESS + 52, 
	EEP_FAC_CO2_CAL_PPM10 =       EEP_BASE_ADDRESS + 54,
	EEP_FAC_CO2_TABLE_POINTS = 		EEP_BASE_ADDRESS + 56,
	
	EEP_CUS_CO2_CAL_AD1	 =        EEP_BASE_ADDRESS + 58, 
	EEP_CUS_CO2_CAL_PPM1 =        EEP_BASE_ADDRESS + 60,
	EEP_CUS_CO2_CAL_AD2	 =        EEP_BASE_ADDRESS + 62, 
	EEP_CUS_CO2_CAL_PPM2 =        EEP_BASE_ADDRESS + 64,
	EEP_CUS_CO2_CAL_AD3	 =        EEP_BASE_ADDRESS + 66, 
	EEP_CUS_CO2_CAL_PPM3 =        EEP_BASE_ADDRESS + 68,
	EEP_CUS_CO2_CAL_AD4	 =        EEP_BASE_ADDRESS + 70, 
	EEP_CUS_CO2_CAL_PPM4 =        EEP_BASE_ADDRESS + 72,
	EEP_CUS_CO2_CAL_AD5	 =        EEP_BASE_ADDRESS + 74, 
	EEP_CUS_CO2_CAL_PPM5 =        EEP_BASE_ADDRESS + 76,
	EEP_CUS_CO2_CAL_AD6	 =        EEP_BASE_ADDRESS + 78, 
	EEP_CUS_CO2_CAL_PPM6 =        EEP_BASE_ADDRESS + 80,
	EEP_CUS_CO2_CAL_AD7	 =        EEP_BASE_ADDRESS + 82, 
	EEP_CUS_CO2_CAL_PPM7 =        EEP_BASE_ADDRESS + 84,
	EEP_CUS_CO2_CAL_AD8	 =        EEP_BASE_ADDRESS + 86, 
	EEP_CUS_CO2_CAL_PPM8 =        EEP_BASE_ADDRESS + 88,
	EEP_CUS_CO2_CAL_AD9	 =        EEP_BASE_ADDRESS + 90, 
	EEP_CUS_CO2_CAL_PPM9 =        EEP_BASE_ADDRESS + 92,
	EEP_CUS_CO2_CAL_AD10	 =      EEP_BASE_ADDRESS + 94, 
	EEP_CUS_CO2_CAL_PPM10 =       EEP_BASE_ADDRESS + 96,
	EEP_CUS_CO2_TABLE_POINTS = 		EEP_BASE_ADDRESS + 98,
	
	EEP_CO2_OFFSET				= 			EEP_BASE_ADDRESS + 100,
	EEP_START_STOP				= 			EEP_BASE_ADDRESS + 102,
	
	EEP_HUM_METER0				= 			EEP_BASE_ADDRESS + 104,
	EEP_HUM_SENSOR0				= 			EEP_BASE_ADDRESS + 106,
	EEP_HUM_METER1				= 			EEP_BASE_ADDRESS + 108,
	EEP_HUM_SENSOR1				= 			EEP_BASE_ADDRESS + 110,
	EEP_HUM_METER2				= 			EEP_BASE_ADDRESS + 112,
	EEP_HUM_SENSOR2				= 			EEP_BASE_ADDRESS + 114,
	EEP_HUM_METER3				= 			EEP_BASE_ADDRESS + 116,
	EEP_HUM_SENSOR3				= 			EEP_BASE_ADDRESS + 118,
	EEP_HUM_METER4				= 			EEP_BASE_ADDRESS + 120,
	EEP_HUM_SENSOR4				= 			EEP_BASE_ADDRESS + 122,
	EEP_HUM_METER5				= 			EEP_BASE_ADDRESS + 124,
	EEP_HUM_SENSOR5				= 			EEP_BASE_ADDRESS + 126,
	EEP_HUM_METER6				= 			EEP_BASE_ADDRESS + 128,
	EEP_HUM_SENSOR6				= 			EEP_BASE_ADDRESS + 130,
	EEP_HUM_METER7				= 			EEP_BASE_ADDRESS + 132,
	EEP_HUM_SENSOR7				= 			EEP_BASE_ADDRESS + 134,
	EEP_HUM_METER8				= 			EEP_BASE_ADDRESS + 136,
	EEP_HUM_SENSOR8				= 			EEP_BASE_ADDRESS + 138,
	EEP_HUM_METER9				= 			EEP_BASE_ADDRESS + 140,
	EEP_HUM_SENSOR9				= 			EEP_BASE_ADDRESS + 142,
	EEP_HUM_POINT					=				EEP_BASE_ADDRESS + 144,
	
	EEP_HUM_OFFSET				= 			EEP_BASE_ADDRESS + 146,
	EEP_AQ_OFFSET				  = 			EEP_BASE_ADDRESS + 148,
	EEP_PM25_OFFSET				= 			EEP_BASE_ADDRESS + 150,
	EEP_HT_OFFSET				= 				EEP_BASE_ADDRESS + 152,
	EEP_PT_OFFSET				= 				EEP_BASE_ADDRESS + 154,
	
	EEP_RTD_POINT				= 				EEP_BASE_ADDRESS + 156,
	EEP_RTD_T0					= 				EEP_BASE_ADDRESS + 158,
	EEP_RTD_AD0				= 					EEP_BASE_ADDRESS + 160,
	EEP_RTD_T1				= 					EEP_BASE_ADDRESS + 162,
	EEP_RTD_AD1				= 					EEP_BASE_ADDRESS + 164,
	EEP_RTD_REF				= 					EEP_BASE_ADDRESS + 166,

	EEP_CO2_FILTER		= 					EEP_BASE_ADDRESS + 168,			
	EEP_FAC_CUS_TABLE = 					EEP_BASE_ADDRESS + 170,
	
	EEP_BACKGROUND_PPM = 					EEP_BASE_ADDRESS + 172,
	EEP_MAX_ADJUST_PER_DAY = 			EEP_BASE_ADDRESS + 174,
	EEP_BACKGROUND_DAYS = 				EEP_BASE_ADDRESS + 176,
	EEP_BACKGROUND_TIME = 				EEP_BASE_ADDRESS + 178,
	EEP_AUTO_CAL_ON_OFF	=					EEP_BASE_ADDRESS + 180,
	EEP_BACKGROUND_OFFSET	=				EEP_BASE_ADDRESS + 182,
} EEP_MAP;

typedef enum
{
	MODBUS_SERIALNUMBER_LOWORD = 0,             
	MODBUS_SERIALNUMBER_HIWORD = 2,
	MODBUS_VERSION_NUMBER_LO = 4,
	MODBUS_VERSION_NUMBER_HI = 5,
	MODBUS_ADDRESS = 6,
	MODBUS_PRODUCT_MODEL,
	MODBUS_HARDWARE_REV,
	//MODBUS_PIC_VERSION,
	MODBUS_ADDRESS_PLUG_N_PLAY,
	MODBUS_BAUDRATE = 15,			// base address select
	MODBUS_UPDATE_STATUS = 16,			// status for update flash
	MODBUS_SERINALNUMBER_WRITE_FLAG = 99,
	
	
	


	MODBUS_CO2_AD= 100 ,
	MODBUS_RTD_AD = 101 ,
	MODBUS_AQ_AD  = 102 ,
	MODBUS_PM25_AD=  103,
	MODBUS_COMPENSATION_ON_OFF = 104 ,
	MODBUS_RTD = 105 ,
	MODBUS_FILTER = 106  , 

	MODBUS_HT = 107,
	MODBUS_HUM 		= 108,
	MODBUS_CO2_PPM = 109,
	MODBUS_PM25		=110 ,
	MODBUS_AQ		= 111 ,
	MODBUS_PRESURE_HI		= 112,
	MODBUS_PRESURE_LO		= 113,
	MODBUS_PT						= 114,
	MODBUS_FAC_CUS_TABLE = 115 ,
	

	MODDBUS_FAC_CAL_POINT	= 120,
	MODBUS_FAC_PPM0	= 121 ,
	MODBUS_FAC_AD0	= 122 ,
	MODBUS_FAC_PPM1	= 123 ,
	MODBUS_FAC_AD1	= 124 ,
	MODBUS_FAC_PPM2	= 125 ,
	MODBUS_FAC_AD2	= 126 ,
	MODBUS_FAC_PPM3	= 127 ,
	MODBUS_FAC_AD3	= 128 ,
	MODBUS_FAC_PPM4	= 129 ,
	MODBUS_FAC_AD4	= 130 ,
	MODBUS_FAC_PPM5	= 131 ,
	MODBUS_FAC_AD5	= 132 ,
	MODBUS_FAC_PPM6	= 133 ,
	MODBUS_FAC_AD6	= 134 ,
	MODBUS_FAC_PPM7	= 135 ,
	MODBUS_FAC_AD7	= 136 ,
	MODBUS_FAC_PPM8	= 137 ,
	MODBUS_FAC_AD8	= 138 ,
	MODBUS_FAC_PPM9	= 139 ,
	MODBUS_FAC_AD9	= 140 ,
	
	MODBUS_BACKGROUND_PPM = 141 ,	//	
	MODBUS_MAX_ADJUST_PER_DAY = 142 ,	//
	MODBUS_BACKGROUND_DAYS = 143 ,//unit: day
	MODBUS_BACKGROUND_TIME	= 144, // unit: hour
	MODBUS_AUTO_CAL_ON_OFF	= 145, // unit: hour
	MODBUS_BACKGROUND_OFFSET = 146,
	
	MODBUS_RTD_POINT = 159,
	MODBUS_CAL_RTD_T0	 = 160,
	MODBUS_CAL_RTD_AD0 = 161 ,
	MODBUS_CAL_RTD_T1  = 162 	,
	MODBUS_CAL_RTD_AD1 = 163,
	
	MODBUS_CO2_OFFSET	= 164 ,
	MODBUS_PM25_OFFSET= 165,
	MODBUS_AQ_OFFSET	= 166 ,
	MODBUS_HT_OFFSET = 167,
	MODBUS_PT_OFFSET = 168,
	
	MODBUS_HUM_POINT		= 171 ,
	MODBUS_METER_HUM0		=172 ,
	MODBUS_SENSOR_HUM0 		= 173,
	MODBUS_METER_HUM1		= 174 ,
	MODBUS_SENSOR_HUM1		= 175 ,
	MODBUS_METER_HUM2		= 176 ,
	MODBUS_SENSOR_HUM2 		= 177 ,
	MODBUS_METER_HUM3 		= 178	,
	MODBUS_SENSOR_HUM3		= 179 ,
	MODBUS_METER_HUM4		= 180 ,
	MODBUS_SENSOR_HUM4		= 181 ,
	MODBUS_METER_HUM5		= 182 ,
	MODBUS_SENSOR_HUM5 		= 183,
	MODBUS_METER_HUM6		= 184 ,
	MODBUS_SENSOR_HUM6 		= 185,
	MODBUS_METER_HUM7		= 186 ,
	MODBUS_SENSOR_HUM7 		= 187 ,
	MODBUS_METER_HUM8 	= 188 ,
	MODBUS_SENSOR_HUM8 		= 189 ,
	MODBUS_METER_HUM9 	= 190	,
	MODBUS_SENSOR_HUM9 		= 191,

//	MODBUS_PRESURE_HI		= 200,
//	MODBUS_PRESURE_LO		= 201,
//	MODBUS_PRESURE_TEMP = 202,
	MODBUS_RTD_REF 			= 203,
	MODBUS_START_STOP_DETECT = 204 ,
	
	MODDBUS_CUS_CAL_POINT	= 300,
	MODBUS_CUS_PPM0	= 301 ,
	MODBUS_CUS_AD0	= 302 ,
	MODBUS_CUS_PPM1	= 303 ,
	MODBUS_CUS_AD1	= 304 ,
	MODBUS_CUS_PPM2	= 305 ,
	MODBUS_CUS_AD2	= 306 ,
	MODBUS_CUS_PPM3	= 307 ,
	MODBUS_CUS_AD3	= 308 ,
	MODBUS_CUS_PPM4	= 309 ,
	MODBUS_CUS_AD4	= 310 ,
	MODBUS_CUS_PPM5	= 311 ,
	MODBUS_CUS_AD5	= 312 ,
	MODBUS_CUS_PPM6	= 313 ,
	MODBUS_CUS_AD6	= 314 ,
	MODBUS_CUS_PPM7	= 315 ,
	MODBUS_CUS_AD7	= 316 ,
	MODBUS_CUS_PPM8	= 317 ,
	MODBUS_CUS_AD8	= 318 ,
	MODBUS_CUS_PPM9	= 319 ,
	MODBUS_CUS_AD9	= 320 ,
	

	MODBUS_TEST1 = 800 ,
	MODBUS_TEST2 ,
	MODBUS_TEST3 ,
	MODBUS_TEST4 ,
	MODBUS_TEST5 ,
	MODBUS_TEST6 ,
	MODBUS_TEST7 ,
	MODBUS_TEST8 ,
	MODBUS_TEST9 ,
	MODBUS_TEST10,
	MODBUS_TEST11,
	MODBUS_TEST12,
	MODBUS_TEST13,
	MODBUS_TEST14,
	MODBUS_TEST15,

} 
MODBUS_REGISTER_LIST;























































 




#endif