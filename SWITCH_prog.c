#include "STD_TYPES.h"
#include "ErrType.h"
#include <util/delay.h>

#include "DIO_interface.h"
#include "SWITCH_interface.h"


uint8 SWITCH_u8GetState(const SWITCH_Cnfig_t* SWITCH_obj, uint8* Copy_u8State)
{
	uint8 Local_u8ErrorState = OK , Local_u8PinValue;


	if(SWITCH_obj!=NULL)
	{
		if(SWITCH_obj->SWITCH_PULL_t==PULLUP)
		{
			DIO_u8ReadPinValue(SWITCH_obj->SWITCH_PORT,SWITCH_obj->SWITCH_PIN,&Local_u8PinValue);
			if(Local_u8PinValue==0)
			{
				*Copy_u8State=PRESSED;
			}
			else if(Local_u8PinValue==1)
			{
				*Copy_u8State=UNPRESSED;
			}

		}
		else if(SWITCH_obj->SWITCH_PULL_t==PULLDWON)
		{
			DIO_u8ReadPinValue(SWITCH_obj->SWITCH_PORT,SWITCH_obj->SWITCH_PIN,&Local_u8PinValue);
			if(Local_u8PinValue==1)
			{
				*Copy_u8State=PRESSED;
			}
			else if(Local_u8PinValue==0)
			{
				*Copy_u8State=UNPRESSED;
			}

		}
	}
	else
	{
		Local_u8ErrorState = NULL_PTR_ERR;
	}


	return Local_u8ErrorState;
}

