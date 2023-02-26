#include "main.h"
/**
  * print_alphabet - entry point
  * function that prints the alphabet
  * Return: Always 0 (success).
  */

void print_alphabet(void)
{
	int x = 0;
	char alpha = 'a';

	while (x < 26)
	{
		_putchar(alpha++);
		x++;
	}

	_putchar('\n');
}

