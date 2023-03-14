#include "main.h"
/**
  * _strstr - locates a substring, finds the first occurence of substring
  * @haystack: where to seatch for substring
  * @needle: string to search for in haystack
  * Return: returns a pointer to the beginning of the located substring
  */
char *_strstr(char *haystack, *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *hold1 = haystack, *hold2 = needle;

		while (*hold1 == *hold2 && *hold2 != '\0')
		{
			hold1++;
			hold2++;
		}

		if (*hold2 == '\0')
			return (haystack);
	}
	return (0)
}
