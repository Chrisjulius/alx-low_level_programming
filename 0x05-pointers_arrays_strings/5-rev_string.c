#include "main.h"
/**
 * rev_string - reverse string
 * @s: string to manipulate
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, index = 0;
	char hwstring;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		hwstring = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = hwstring;
	}
}

