#include "main.h"
#include <unistd.h>

/**
  * _putchar - write character to stdout
  * @c: character to write to stdout
  * Return: On success return 1
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
