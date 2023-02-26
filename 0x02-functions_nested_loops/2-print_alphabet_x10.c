#include "main.h"
/**
  * print_alphabet_x10 - entry point
  * function that prints the alphabet
  * Return: Always 0 (success).
  */

void print_alphabet_x10(void)
{
	int x;
	int y;
	char alpha;

	x = 0;
	y = 0;
	alpha = 'a';

	while (y < 10)
	{
		while (x < 26)
		{
			_putchar(alpha++);
			x++;
		}
		_putchar('\n');
		alpha = 'a';
		x = 0;
		y++;
	}
}

