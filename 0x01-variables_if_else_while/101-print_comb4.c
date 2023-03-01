#include <stdio.h>
/* more headers goes there */
/**
  * main - Entry point
  * print all combinations of three-digit numbers
  * Return: Always 0 (Success)
  */
/* betty style doc for function main go@es there */
int main(void)
{
	int a, b, c;

	for (a = '0'; a < '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			for (c = b + 1; c <= '9'; c++)
			{
				if ((a != b) != c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == '7' && b == '8')
						a++;
					else
					{
						putchar(',');
						putchar(' ');
					}

				}
			}
		}
	}
	putchar('\n');
	return (0);
}
