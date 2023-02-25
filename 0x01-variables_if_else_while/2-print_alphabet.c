#include <stdio.h>
/* more headers goes there */
/**
* main - Entry point
* print the alphabet in lowercase (a-z)
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
		putchar(a++);
		x++;
	}

	putchar('\n');

	return (0);
}
