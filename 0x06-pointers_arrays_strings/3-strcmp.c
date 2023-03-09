#include "main.h"
/**
  * _strncmp - copies two string
  * @s1: fist string
  * @s2: second string
  * Return: return value of comparison, either less than, equal to
  * , or greater than 0
  */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
			return(s1[a] - s2[a]);

		a++;
	}
	return (0);
}
