#include "main.h"
/**
 * print_array - prints the element of an array n times
 * @a: array to print from
 * @n: number of times to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int idx;

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", a[idx]);
		if (idx != (n - 1))
			printf(", ");
	}
	putchar('\n');
}
