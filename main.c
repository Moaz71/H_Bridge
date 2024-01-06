#include "STD_TYPES.h"
#include <util/delay.h>
#include "DIO_interface.h"
#include "PORT_inerface.h"
#include "SWITCH_interface.h"
#include "DCMOTOR_interface.h"


void main(void)
{

	uint8 Local_u8Switch1State,Local_u8Switch2State,Local_u8Switch3State;

	/*make object from DC_MOTOR_Config_t*/
	DC_MOTOR_Config_t Motor={
			.Conection_PORT=DIO_u8PORTC,
			.PIN1_Conection=DIO_u8PIN4,
			.PIN2_Conection=DIO_u8PIN5
	};

	/*make three object from SWITCH_Cnfig_t*/
	SWITCH_Cnfig_t Switch1={

			.SWITCH_PORT=DIO_u8PORTD,
			.SWITCH_PIN=DIO_u8PIN2,
			.SWITCH_PULL_t=PULLUP

	};

	SWITCH_Cnfig_t Switch2={

			.SWITCH_PORT=DIO_u8PORTD,
			.SWITCH_PIN=DIO_u8PIN3,
			.SWITCH_PULL_t=PULLUP
	};

	SWITCH_Cnfig_t Switch3={

			.SWITCH_PORT=DIO_u8PORTD,
			.SWITCH_PIN=DIO_u8PIN4,
			.SWITCH_PULL_t=PULLUP

	};


	PORT_voidInit();
	while(1)
	{
		/* get reading of the three Button*/
		SWITCH_u8GetState(&Switch1,&Local_u8Switch1State);
		SWITCH_u8GetState(&Switch2,&Local_u8Switch2State);
		SWITCH_u8GetState(&Switch3,&Local_u8Switch3State);

		/*check if CW button is pressed*/
		if(Local_u8Switch1State==PRESSED)
		{
			DCMOTOR_voidRotateCW(&Motor);
		}
		/*check if CCW button is pressed*/
		else if(Local_u8Switch2State==PRESSED)
		{
			DCMOTOR_voidRotateCWW(&Motor);
		}
		/*check if STOP button is pressed*/
		else if(Local_u8Switch3State==PRESSED)
		{
			DCMOTOR_voidMotorStop(&Motor);
		}

	}


}
