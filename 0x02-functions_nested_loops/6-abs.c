#include "main.h"
/**
  * int_abs - absolute numbers
  * @n: value to compute
  * Return: Always 0 (success).
  */
int int_abs(int n)
{
	int abs;

	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		abs = n * -2;
		return (n + abs);
	}
}


