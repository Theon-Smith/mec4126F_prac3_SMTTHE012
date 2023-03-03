// Description----------------------------------------------------------------|
/*
 *
 */
// DEFINES AND INCLUDES-------------------------------------------------------|

#define STM32F051												   //COMPULSORY
#include "stm32f0xx.h"											   //COMPULSORY
#include "lcd_stm32f0.h"
#include <stdint.h>

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


	while(1)
	{

	}
}

// OTHER FUNCTIONS -----------------------------------------------------------|
