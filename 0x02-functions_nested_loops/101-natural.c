#include "main.h"
#include <stdio.h>
/**
  * main - starting point.
  * Print compute natural num below 1024 which are multiple of 3 or 5.
  * Add them up.
  * Return: Always 0 (success).
  */
int main(void)
{
	int a, b;

	b = 0;
	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
			b += a;
		a++;
	}
	printf("%d\n", b);

	return (0);
}

