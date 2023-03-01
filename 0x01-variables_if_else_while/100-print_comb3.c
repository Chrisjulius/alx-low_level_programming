#include <stdio.h>
/* more headers goes there */
/**
  * main - Entry point
  * print all combinations of single-digit numbers
  * Return: Always 0 (Success)
  */
/* betty style doc for function main goes there */
int main(void)
{
	int a, b;

	for (a = '0'; a < '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			if (b != a)
			{
				putchar(a);
				putchar(b);
					if (a == '8' && b == '9')
					{
						a++;
						b++;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	}
	putchar('\n');

	return (0);
}

