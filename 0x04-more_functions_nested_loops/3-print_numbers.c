#include "main.h"
/**
  * print_numbers - print the number 0 to 9
  *
  *
  * Return: void
  */
void print_numbers(void)
{
	int i, j;

	j = 48;

	for (i = 0; i < 10; i++)
		_putchar(j++);
	_putchar('\n');
}
