#include <stdio.h>
/* more headers goes there */
/**
* main - Entry point
* print the hexidecimal, base 16 numbers
* Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int x;
	char alpha;

	x = 0;
	alpha = 'a';

	while (x < 16)
	{
		if (x > 9 && x < 16)
		{
			putchar(alpha);
			alpha++;
			x++;
		}
		else
		{
			putchar(48 + x);
			x++;
		}
	}

	putchar('\n');

	return (0);
}

