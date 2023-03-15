#include "main.h"
/**
  * factorial - return the factorial of a given number
  * @n: number to compute
  * Return: -1 for error, or factorial of n
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
