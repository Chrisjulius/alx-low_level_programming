#include "main.h"
/**
  * _islower - entry point
  * function that check for lowercase character
  * Return: Always 0 (success).
  */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return 1;
	else
		return 0;
}

