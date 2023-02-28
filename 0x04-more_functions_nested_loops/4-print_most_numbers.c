#include "main.h"
/**
  * print_most_numbers - print the number 0 to 9, except 2 and 4
  *
  *
  * Return: void
  */
void print_most_numbers(void)
{
	int i, j;

	j = 48;

	for (i = 0; i < 8; i++)
	{
		if (j == 50 || j == 52)
			j++;
		_putchar(j++);
	}
	_putchar('\n');
}
