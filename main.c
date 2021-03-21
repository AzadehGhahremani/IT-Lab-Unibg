  /*      
 * Blink.c
 *
 * Created: 12/02/2021 3:20:09 AM
 * Author : Azadeh
 */ 

#include <avr/io.h>
#include <avr/sfr_defs.h>

#define F_CPU 1000000UL
#include <util/delay.h>

#define BV(bit)			(1<<(bit))
#define sbi(reg,bit)	reg |= (BV(bit))
#define cbi(reg,bit)	reg &= ~(BV(bit))


int main(void)
{
    /* Replace with your application code */
	sbi(DDRB,6);//out LED
	cbi(DDRB,7);//input Key
	sbi(PORTB,7);//pullup
    while (1) 
    {
		if(bit_is_clear(PINB,7)){
			sbi(PORTB,6);//LED on
			_delay_ms(250);
			cbi(PORTB,6);//LED off
			_delay_ms(250);
		}
    }
}



