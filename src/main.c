// Description----------------------------------------------------------------|
/*
 *
 */
// DEFINES AND INCLUDES-------------------------------------------------------|

#define STM32F051												   //COMPULSORY
#include "stm32f0xx.h"											   //COMPULSORY
#include "lcd_stm32f0.h"
#include <stdint.h>
#include <stdio.h>

// GLOBAL VARIABLES ----------------------------------------------------------|

struct age_data {
	uint8_t day;
	uint8_t month;
	uint16_t year;
	uint8_t age;
} my_age = {17, 8, 2001, 21};

// FUNCTION DECLARATIONS -----------------------------------------------------|

void main(void);                                                   //COMPULSORY

// MAIN FUNCTION -------------------------------------------------------------|

void main(void)
{
	init_LCD();
	struct age_data age_theon = {17, 8, 2001, 21};

	char birth_date[11];
	sprintf(birth_date, "%02d/%02d/%04d", age_theon.day, age_theon.month, age_theon.year);
	lcd_putstring(birth_date);
	lcd_command(LINE_TWO); // move cursor to next line

	uint8_t age_count = 0;
	char count_str[3];
	while(1)
	{
		sprintf(count_str, "%2d", age_count++);
		lcd_command(LINE_TWO);    //reset cursor
		lcd_putstring(count_str);
		delay(100000);
		if(age_count > age_theon.age) {
			age_count = 0;
		}


	}
}

// OTHER FUNCTIONS -----------------------------------------------------------|
