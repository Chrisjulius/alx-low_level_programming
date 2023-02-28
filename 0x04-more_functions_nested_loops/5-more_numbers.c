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
				putchar(49);
				putchar(num - 10);
				num++;
			}
			else
				putchar(num++);		
		}
		putchar('\n');
		num = 48;
	}
}
