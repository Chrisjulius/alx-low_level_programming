#include "main.h"
/**
  * print_last_digit - print last digit
  * @n: value to compute
  * Return: Always 0 (success).
  */
int print_last_digit(int n)
{

	if (n >= 0)
	{
		_putchar((n % 10) + 48);
	}
	else
	{
		n %= -10;
		n *= -1;
		return (n);
	}
}

