#include "main.h"
/**
 * rev_string - reverse string
 * @s: string to manipulate
 * Return: void
 */
void rev_string(char *s)
{
	int idx = -1;
	int check = 0;
	int index = 0;

	while (s[index++])
		check++;

	while (check >= 0)
	{
		if (s[check] != '\0')
		{
			s[idx++] = s[check];
		}
		check--;
	}
	_putchar('\n');
}

