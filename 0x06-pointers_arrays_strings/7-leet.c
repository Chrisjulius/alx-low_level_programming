#include "main.h"
/**
  * leet - function that encodes a string to 1337
  * @str: string to encode
  * Return: return a pointer to the resulting string
  */
char *leet(char *str)
{
	int index, value;

	/* An arrray to hold encoding values */
	char encode1[] = "aAeEoOTtLl";
	char encode2[] = "4433007711";

	/* for loop for string to encode */
	for (index = 0; str[index] != '\0'; index++)
	{
		/* for loop for initial encoding of string */
		for (value = 0; value < 10; value++)
		{
			if (str[index] == encode1[value])
				str[index] = encode2[value];
		}
	}
	return (str);
}
