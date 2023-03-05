#include "main.h"
#include <stdio.h>
/**
  * main - starting point
  * Print the largest prime factor of the number 612852475143
  * Return: 0 - success
  */
int main(void)
{
	long maxfactor, x, number = 612852475143;

	for (x = 1; x <= number; x++)
	{
		if (number % x == 0)
		{
			maxfactor = number / x;
			number = maxfactor;
		}

		if (number == 1)
			break;
	}
	printf("%ld\n", x);
	return (0);
}

