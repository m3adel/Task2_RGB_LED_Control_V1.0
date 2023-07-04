
/*
 * app.h
 *
 * Created: 4/9/2023 8:54:47 AM
 *  Author: MOHAMED ABDELSALAM
 */ 


#ifndef APP_H_
#define APP_H_
/*MCAL*/
#include "../HAL/led/led.h"
#include "../HAL/btn/btn.h"
/*Macros*/
#define STATE_1	0
#define STATE_2	1
#define STATE_3	2
#define STATE_4	3
#define STATE_5	4
#define STATE_NUMBER	5
/*APIs*/
void APP_init(void);
void APP_start(void);

#endif
