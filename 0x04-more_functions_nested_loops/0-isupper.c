#include "main.h"
/**
  * _isupper - checks for uppercase character
  * @x: character to check
  * Return: 1 if uppercase, 0 otherwise.
  */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
