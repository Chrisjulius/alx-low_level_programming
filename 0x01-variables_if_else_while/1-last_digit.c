#include <stdlib.h>
#include <time.h>
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
	int last_digit = n % 10;

	char text[20];

	if (last_digit > 5)
		text = "and is greater than 5\n";
	if (last_digit == 0)
		text = "and is 0\n";
	if (last_digit < 6 && last_digit != 0)
		text = "and is less than 6 and not 0\n";

	printf("Last digit of %d is %d %c", n, last_digit, text);

	return (0);
}
