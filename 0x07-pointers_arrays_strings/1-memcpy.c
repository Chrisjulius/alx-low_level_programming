#include "main.h"
/**
  * _memcpy - function to copy memory area
  * @dest: pointer to array to recieve copied memory
  * @src: pointer to source array
  * @n: number of byte to copy
  * Return: returns the resulting pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
		n--;
	}
}
