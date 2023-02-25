#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last_digit = n % 10;

	if (last_digit > 5)
		printf(\
	"Last digit of %d is %d and is greater than %d\n", n, n % 10, 5);
	if (last_digit == 0)
		printf(\
	"Last digit of %d is %d and is %d\n", n, n % 10, 0);
	if (last_digit < 6 && last_digit != 0)
		printf(\
	"Last digit of %d is %d and is less than %d and not %d\n",\
	n, n % 10, 6, 0);

	return (0);
}
