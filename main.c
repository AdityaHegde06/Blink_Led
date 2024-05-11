/*
 * Blink_led.2.c
 *
 * Created: 10-05-2024 21:01:43
 * Author : adity
 */ 


#include <avr/io.h>
#include <util/delay.h>



#define LED_PIN PB7// Define the pin connected to the LED

void init_led()
{
	// Insert code
	//set as led pin as output
	DDRB|=(1<<LED_PIN);
}


int main()
{
	DDRB |= (1<<DDB7);
	
	while(1)
	{
			//BUTTON IS PRESSED  (TURN ON THE LED)
			PORTB |=(1 << LED_PIN);
			_delay_ms(1000);
			//BUTTON IS NOT PRESSED ,TURN OFF THE LED
			PORTB &= ~(1 << LED_PIN);
			_delay_ms(1000);
	}

	//never return
	return 0;
}
