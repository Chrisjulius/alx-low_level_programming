#include <stdio.h>
/* more headers goes there */
/**
* main - Entry point
* print the numbers 0-9 with putchar
* Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int x;

	x = 0;

	while (x < 10)
	{
		if (x < 10)
		{
			putchar((char)x);
			x++;
		}
	}

	putchar('\n');

	return (0);
}

