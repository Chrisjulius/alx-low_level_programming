#include "main.h"
/**
  * more_numbers - print the number 0 to 14, 10x
  *
i  *
  * Return: void
  */
void more_numbers(void)
{
	int i, j, a, b, num;

	num = 48;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (num > 57)
			{
				a = 49;
				b = num - 10;
				_putchar(a);
				_putchar(b);
				num++;
			}
			else
				_putchar(num++);
		}
		_putchar('\n');
		num = 48;
	}
}
