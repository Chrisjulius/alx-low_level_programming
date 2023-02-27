#include "main.h"
/**
  * jack_bauer - print 24 hours
  * 
  * Return: Always 0 (success).
  */
void jack_bauer(void)
{
	char place2m, place1m, column, place2h, place1h;

	place2m = place1m = place2h = place1h = '0';
	column = ':';
	while (place1h != 51)
	{
		while (place2h < 58 && place1h <= 49)
		{
			while (place1m < 54)
			{
				while (place2m < 58)
				{
					_putchar(place1h);
					_putchar(place2h);
					_putchar(column);
					_putchar(place1m);
					_putchar(place2m);
					_putchar('\n');
					place2m++;
				}
				place2m = '0';
				place1m++;
			}
			place1m = '0';
			place2h++;
		}
		place2h = '0';
		while (place1h == 50 && place2h < 52)
		{
			while (place1m < 54)
			{
				while (place2m < 58)
				{
					_putchar(place1h);
					_putchar(place2h);
					_putchar(column);
					_putchar(place1m);
					_putchar(place2m);
					_putchar('\n');
					place2m++;
				}
				place2m = '0';
				place1m++;
			}
			place1m = '0';
			place2h++;
		}	
		place1h++;
	}	
}
