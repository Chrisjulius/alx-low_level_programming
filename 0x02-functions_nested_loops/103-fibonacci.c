#include "main.h"
#include <stdio.h>
/**
  * main - starting point.
  * Print the sum of the even-valued terms of a fibonacci sequence
  * The term in the sequence should not exceed 4,000,000
  * Return: Always 0 (success).
  */
int main(void)
{
	long last, fib, sum;

	last = 1, fib = 2, sum = fib;
	while (last + fib < 4000000)
	{
		fib += last
		if (fib % 2 == 0)
			sum += fib
		last = fib - last;
	}
	printf("%ld\n", sum);
	return (0);

}
