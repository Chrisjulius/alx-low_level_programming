#include "main.h"
/**
  * reverse_array - reverses the content of an of integers
  * @a: pointer to an array of integers
  * @n: number of elements of the array
  * Return: return void
  */
void reverse_array(int *a, int n)
{
	int counter, hold;

	for (counter = 0; counter < n--; counter++)
	{
		hold = a[counter];
		a[counter] = a[n];
		a[n] = hold;
	}
}
