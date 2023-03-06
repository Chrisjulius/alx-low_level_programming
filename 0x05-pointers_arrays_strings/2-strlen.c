#include "main.h"
/**
 * _strlen - compute the length of string
 * @s: input string
 * Return: returns the length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
