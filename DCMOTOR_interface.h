#ifndef DCMOTOR_INTERFACE_H
#define DCMOTOR_INTERFACE_H

typedef struct 
{
	uint8 Conection_PORT;
	uint8 PIN1_Conection;
	uint8 PIN2_Conection;
}DC_MOTOR_Config_t;

void DCMOTOR_voidRotateCW(const DC_MOTOR_Config_t* DCMOTOR_Obj);

void DCMOTOR_voidRotateCWW(const DC_MOTOR_Config_t* DCMOTOR_Obj);

void DCMOTOR_voidMotorStop(const DC_MOTOR_Config_t* DCMOTOR_Obj);






#endif
