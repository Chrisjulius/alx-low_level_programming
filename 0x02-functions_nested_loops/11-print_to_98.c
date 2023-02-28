#include "main.h"
#include <stdio.h>
/**
  * print_to_98  - print natural numbers to 98.
  * @n: starting value
  * Return: no return value
  */
void print_to_98(int n)
{
	int count, start;

	start = n;
	if (n >= 98)
	{
		for (count = 0; count <= (n - 98); count++)
		{
			printf("%d", start--);
			if (start != 97)
				printf(", ");
		}
	}
	else
	{
		for (count = 0; count <= (98 - n); count++)
		{
			printf("%d", start++);
			if (start != 99)
				printf(", ");
		}
	}
	putchar('\n');
}
