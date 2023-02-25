#include <stdio.h>
/* more headers goes there */
/**
* main - Entry point
* print all combinations of single-digit numbers
* Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int x;

	x = 0;

	while (x < 10)
	{
		putchar(48 + x);

		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}

	return (0);
}

