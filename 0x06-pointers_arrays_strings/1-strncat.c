#include "main.h"
/**
  * _strncat - appending strings
  * @dest: string to append to
  * @src: string for appending
  * @n: no of bytes from src to append
  * Return: a pointer to final dest string
  */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
		a++;
	b = 0;
	while (b < n && (src[b] != '\0'))
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
