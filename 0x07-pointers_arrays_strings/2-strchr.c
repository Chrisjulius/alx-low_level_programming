#include "main.h"
/**
  * _strchr - function to locate a character in a string
  * @s: string to search
  * @c: character to locate in string
  * Return: returns a pointer to the first occurence of the character c
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
