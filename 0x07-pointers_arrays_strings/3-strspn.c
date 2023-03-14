#include "main.h"
/**
  * _strspn - function to get the length of a prefix substring
  * @s: string to search
  * @accept: character to locate in string
  * Return: returns the number of bytes of c found in s
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
