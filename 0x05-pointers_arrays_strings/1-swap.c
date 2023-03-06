#include "main.h"
/**
 * swap_int - swap the value of two integer.
 * @a: int value 1.
 * @b: int value 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
