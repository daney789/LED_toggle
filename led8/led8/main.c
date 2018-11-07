#define F_CPU 1600000l
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC = 0xff;
	PORTC = 0x00;
	
	while (1)
	{
		for (int i = 0; i < 8; i++)
		{
			if (i == 0)
			{
				PORTC = 0x01;
				_delay_ms(1000);
				PORTC = 0x00;
			}
			if (i == 1)
			{
				PORTC = 0x02;
				_delay_ms(1000);
				PORTC = 0x00;
			}
			if (i == 2)
			{
				PORTC = 0x04;
				_delay_ms(1000);
				PORTC = 0x00;
			}
			if (i == 3)
			{
				PORTC = 0x08;
				_delay_ms(1000);
				PORTC = 0x00;
			}
			if (i == 4)
			{
				PORTC = 0x10;
				_delay_ms(1000);
				PORTC = 0x00;
			}
			if (i == 5)
			{
				PORTC = 0x20;
				_delay_ms(1000);
				PORTC = 0x00;
			}
			if (i == 6)
			{
				PORTC = 0x40;
				_delay_ms(1000);
				PORTC = 0x00;
			}
			if (i == 7)
			{
				PORTC = 0x80;
				_delay_ms(1000);
				PORTC = 0x00;
				for( int b = 0; b <8; b++)
				{
					if(b == 0)
					{PORTC = 0x40;
						_delay_ms(1000);
						PORTC = 0x00;
					}
					if(b == 0)
					{PORTC = 0x20;
						_delay_ms(1000);
						PORTC = 0x00;
					}
					if(b == 0)
					{PORTC = 0x10;
						_delay_ms(1000);
						PORTC = 0x00;
					}
					if(b == 0)
					{PORTC = 0x08;
						_delay_ms(1000);
						PORTC = 0x00;
					}
					if(b == 0)
					{PORTC = 0x04;
						_delay_ms(1000);
						PORTC = 0x00;
					}
					if(b == 0)
					{PORTC = 0x02;
						_delay_ms(1000);
						PORTC = 0x00;
					}
					if(b == 0)
					{PORTC = 0x01;
						_delay_ms(1000);
						PORTC = 0x00;
					}
				}
			}
		}
	}
}