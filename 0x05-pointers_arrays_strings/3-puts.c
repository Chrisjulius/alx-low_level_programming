#include "main.h"
/**
 * _puts - prints a string
 * @str - string to print
 * Return: void
 */
void _puts(char *str)
{
	int count = 0;

	while (*(str + count++))
	{
		if (*str != '\0')
			_putchar(*str);
	}
	_putchar('\n');
}
