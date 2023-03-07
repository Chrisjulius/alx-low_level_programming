#include "main.h"
/**
 * _strcpy - copies string to another pointed destination
 * @dest: destination of copied string
 * @src: source of string to copy
 * Return: return the pointer dest
 */
char *_strcpy(char *dest, char *src)
{
	int idx;

	for (idx = 0; src[idx] != '\0'; idx++)
		dest[idx] = src[idx];
	dest[idx] = '\0';

	return (dest);
}
