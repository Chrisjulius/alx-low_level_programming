#include "main.h"
/**
  * string_toupper - changes all lowercase letters of a string to uppercase
  * @a:  pointer to a string
  * Return: return a pointer to the resulting string
  */
char *string_toupper(char *a)
{
	int x = 0;

	while (a[x])
	{
		if (a[x] >= 'a' && a[x] <= 'z')
			a[x] = a[x] - 32;
		x++;
	}
	return (a);
}
