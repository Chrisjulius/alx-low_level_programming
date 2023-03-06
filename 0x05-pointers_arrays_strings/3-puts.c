#include "main.h"
/**
 * _puts - prints a string
 * @str - string to print
 * Return: void
 */
void _puts(char *str)
{
	_putchar(str[0]);

	while (*str++)
	{
		if (*str != '\0')
			_putchar(*str);
	}
	_putchar('\n');
}
