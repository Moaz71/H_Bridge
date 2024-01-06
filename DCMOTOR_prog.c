#include "STD_TYPES.h"

#include "DIO_interface.h"

#include "DCMOTOR_interface.h"




void DCMOTOR_voidRotateCW(const DC_MOTOR_Config_t* DCMOTOR_Obj)
{
	DIO_u8SetPinValue(DCMOTOR_Obj->Conection_PORT,DCMOTOR_Obj->PIN1_Conection,DIO_u8PIN_HIGH);

	DIO_u8SetPinValue(DCMOTOR_Obj->Conection_PORT,DCMOTOR_Obj->PIN2_Conection,DIO_u8PIN_LOW);
}


void DCMOTOR_voidRotateCWW(const DC_MOTOR_Config_t* DCMOTOR_Obj)
{
	DIO_u8SetPinValue(DCMOTOR_Obj->Conection_PORT,DCMOTOR_Obj->PIN1_Conection,DIO_u8PIN_LOW);

	DIO_u8SetPinValue(DCMOTOR_Obj->Conection_PORT,DCMOTOR_Obj->PIN2_Conection,DIO_u8PIN_HIGH);
}


void DCMOTOR_voidMotorStop(const DC_MOTOR_Config_t* DCMOTOR_Obj)
{
	DIO_u8SetPinValue(DCMOTOR_Obj->Conection_PORT,DCMOTOR_Obj->PIN1_Conection,DIO_u8PIN_LOW);

	DIO_u8SetPinValue(DCMOTOR_Obj->Conection_PORT,DCMOTOR_Obj->PIN2_Conection,DIO_u8PIN_LOW);
}
