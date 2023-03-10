#include "main.h"
/**
  * cap_string - capitalize the string
  * @n:  pointer to a string
  * Return: return a pointer to the resulting string
  */
char *cap_string(char *n)
{
	int index = 0;

	while (n[index])
	{
		while (!(n[index] >= 'a' && n[index] <= 'z'))
			index++;

		if (n[index - 1] == '{' ||
			n[index - 1] == '}' ||
			n[index - 1] == '(' ||
			n[index - 1] == ')' ||
			n[index - 1] == ' ' ||
			n[index - 1] == '.' ||
			n[index - 1] == ',' ||
			n[index - 1] == ';' ||
			n[index - 1] == '!' ||
			n[index - 1] == '?' ||
			n[index - 1] == '"' ||
			n[index - 1] == '\t' ||
			n[index - 1] == '\n' ||
			index == 0)
			n[index] -= 32;
		index++;
	}
	return (n);
}
