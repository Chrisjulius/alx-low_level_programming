#include "main.h"
/**
  * _strncpy - copies a strings
  * @dest: copy to this destination pointer
  * @src: string to copy
  * @n: no of bytes to copy
  * Return: return a pointer to dest string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && (src[a] != '\0'))
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
