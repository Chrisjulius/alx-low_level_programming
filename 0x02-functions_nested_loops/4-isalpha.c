#include "main.h"
/**
  * _isalpha - entry point and confirm uppercase value
  * @c: value to be checked
  * Return: Always 0 (success).
  */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}


