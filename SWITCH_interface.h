#ifndef SWITCH_INTERFACE_H
#define SWITCH_INTERFACE_H

typedef struct
{
	uint8 SWITCH_PORT;
	uint8 SWITCH_PIN;
	uint8 SWITCH_PULL_t;
	
}SWITCH_Cnfig_t;


#define PULLUP           0
#define PULLDWON         1

#define UNPRESSED        0
#define PRESSED          1


uint8 SWITCH_u8GetState(const SWITCH_Cnfig_t* SWITCH_obj, uint8* Copy_u8State);




#endif
