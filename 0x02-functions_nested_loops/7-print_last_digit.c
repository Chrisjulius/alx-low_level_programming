#include "main.h"
/**
  * print_last_digit - print last digit
  * @n: value to compute
  * Return: Always 0 (success).
  */
int print_last_digit(int n)
{
	int abs;
	int last_digit1;

	if (n >= 0)
	{
		last_digit1 = n % 10;
		last_digit1 += last_digit1 * 10
		return (last_digit1);
	}
	else
	{
		n %= -10;
		abs = n * -2;
		last_digit1 = n + abs;
		last_digit1 += last_digit1 * 10;
		return (last_digit1);
	}
}

