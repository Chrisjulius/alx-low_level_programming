#include "main.h"
/**
  * print_triangle - prints a triangle
  * @size: size of the triangle
  *
  * Return: void
  */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - a; b > 1; b--)
				_putchar(32);
			for (c = 0; c <= 9; c++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
