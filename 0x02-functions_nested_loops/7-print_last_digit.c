#include "main.h"
/**
  * print_last_digit - print last digit
  * @n: value to compute
  * Return: Always 0 (success).
  */
int print_last_digit(int n)
{
	int abs;

	if (n >= 0)
	{
		return (n % 10);
	}
	else
	{
		n %= -10;
		abs = n * -2
		return (n + abs);
	}
}

