#include "main.h"
/**
  * _strcat - appending strings
  * @dest: string to append to
  * @src: string for appending
  * Return: a pointer to final dest string
  */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
		a++;
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
