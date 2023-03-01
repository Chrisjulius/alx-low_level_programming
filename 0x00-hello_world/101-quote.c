#include <stdio.h>
#include <unistd.h>

/**
  * main - print a string to standard error using unix standard
  * Return: (1) - success
  */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 25-10-19\n", 59);

	return (1);
}
