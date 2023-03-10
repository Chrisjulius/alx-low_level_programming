#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to manipulate
 * Return: void
 */
void puts_half(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
		a++;
	if (a % 2 == 1)
		b = (a - 1) / 2 + 1;
	else
		b = a / 2;

	for (; b < a; b++)
	{
		if (str[b] != '\0')
			_putchar(str[b]);
	}
	_putchar('\n');
}
