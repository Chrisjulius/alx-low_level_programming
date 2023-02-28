#include "main.h"
/**
  * more_numbers - print the number 0 to 14, 10x
  *
i  *
  * Return: void
  */
void more_numbers(void)
{
	int i, j, num;

	num = 48;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar(49);
				if (j == 10)
					num = 48;
			}
			_putchar(num++);
		}
		_putchar('\n');
		num = 48;
	}
}
