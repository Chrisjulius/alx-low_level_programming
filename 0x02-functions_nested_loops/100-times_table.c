#include "main.h"
/**
  * print_times_table - print times table.
  * @n: the n times table
  * Return: Always 0 (success).
  */
void print_times_table(int n)
{
	int a, multiplier, product;

	if (n >= 0 && nn <= 15)
	{
		for (a = 0; a <= n; num++)
		{
			_putchar('0');
			for (multiplier = 1; multiplier <= n; multiplier++)
			{
				_putchar(',');
				_putchar(' ');
				prod = a * multiplier;
				if (product <= 99)
					_putchar(' ');
				if (product <= 9)
					_putchar(' ');
				if (product >= 100)
				{
					_putchar((product / 100) + 48);
					_putchar((product / 10) % 10 + 48);
				}
				else if (product <= 99 && product >= 10)
					_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
			_putchar('\n');
		}
	}
}

