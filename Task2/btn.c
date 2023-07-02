/*
 * bbtn.c
 *
 * Created: 4/9/2023 9:10:35 AM
 *  Author: MOHAMED ABDELSALAM
 */ 
#include "btn.h"
/*
 Name: BUTTON_init
 Input: str_gpio_config_t st_gpio_config
 Output: void
 Description: Function to toggle Pin value.
*/
void BUTTON_init (str_gpio_config_t st_gpio_config)
{
	st_gpio_config.enm_gpio_pinAmpere = R8;
	st_gpio_config.enm_gpio_pinDirection = IN;
	st_gpio_config.enm_gpio_pullUP		=	ENABLE;
	GPIO_init ( st_gpio_config );
}
/*
 Name: BUTTON_read
 Input: str_gpio_config_t st_gpio_config
 Output: boolean
 Description: Function to toggle Pin value.
*/
boolean BUTTON_read (str_gpio_config_t st_gpio_config)
{
	boolean bool_l_return;
	bool_l_return = GPIO_read ( st_gpio_config );
	return bool_l_return;
}
