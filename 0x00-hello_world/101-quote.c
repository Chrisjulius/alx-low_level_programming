#include <stdio.h>
#include <unistd.h>

/**
  * main - print a string to standard error using unix standard
  * Return: (1) - success
  */
int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 25-10-19\n", stdout);

	return (1);
}
