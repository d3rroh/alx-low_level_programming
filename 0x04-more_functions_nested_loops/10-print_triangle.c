#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: demensions of triangle
 * Return: nothing
 **/

void print_triangle(int size)
{
	int i, j;

	if (size < 1)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
			_putchar(' ');
		for (j = i; j > 0; j--)
			_putchar('#');
		_putchar('\n');
	}
}
