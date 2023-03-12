#include "main.h"
/**
  * _memset - function to fill memory with a constant byte
  * @s: pointer to an array which is to be filled with a byte
  * @b: constant byte
  * @n: number of byte to fill in s
  * Return: returns the resulting pointer to an array
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
