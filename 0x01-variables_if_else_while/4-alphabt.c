#include <stdio.h>
/* more headers goes there */
/**
* main - Entry point
* print the alphabet in lowercase and excluding e and q (a-df-pr-Z)
* Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int x;
	char a;

	x = 0;
	a = 'a';

	while (x < 26)
	{
		if (a == 'e' || a == 'q')
		{
			a++;
			x++;
		}
		else
		{
			putchar(a++);
			x++;
		}
	}

	putchar('\n');

	return (0);
}

