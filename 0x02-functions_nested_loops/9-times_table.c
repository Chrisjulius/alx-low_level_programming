#include "main.h"
/**
  * times_table - print 9 times table.
  * Return: Always 0 (success).
  */
void times_table(void)
{
	int y, x, product, prod1, prod2;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			product = x * y;
			if (product > 9)
			{
				prod2 = product % 10 + 48;
				prod1 = (product - (product % 10)) / 10 + 48;
				_putchar(44);
				_putchar(32);
				_putchar(prod1);
				_putchar(prod2);
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(product + 48);
			}
		}
		_putchar('\n');
	}
}
