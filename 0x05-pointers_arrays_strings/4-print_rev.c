#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: string to manipulate
 * Return: void
 */
void print_rev(char *s)
{
	int check = 0;

	while (s[check] != '\0')
		check++;

	while (check > 0)
	{
		_putchar(s[check]);
		check--;
	}
	_putchar('\n');
}
