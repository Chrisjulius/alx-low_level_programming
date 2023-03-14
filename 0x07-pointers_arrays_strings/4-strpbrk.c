#include "main.h"
/**
  * _strpbrk - searches a string for any set of bytes, locates first occurence
  * @s: contains set of bytes for search
  * @accept: string to search
  * Return: returns a pointer to the matching byte in s
  */
char _strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (&s);
		}
		s++;
	}
	return ('\0');

}
