#include "main.h"
#include <stdio.h>
/**
  * main - starting point.
  * Print the first 50 fibonacci numbers, start 1 and 2.
  * Return: Always 0 (success).
  */
int main(void)
{
	int i;
	long last, fib;

	i = 0, last = 1, fib = 2;
	while (i < 50)
	{
		if (i == 0)
			printf("%ld", last);
		else if (i == 1)
			printf(", %ld", fib);
		else
		{
			fib += last;
			last = fib - last;
			printf(", %d", fib);
		}
		i++;
	}
	putchar('\n');
	return (0);
}

