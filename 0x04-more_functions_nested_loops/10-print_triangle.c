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
		for (a = 1; a <= size; a++)
		{
			for (b = size - a; b >= 1; b--)
				_putchar(32);
			for (c = 0; c < a; c++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
