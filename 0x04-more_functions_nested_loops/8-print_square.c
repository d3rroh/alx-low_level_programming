#include "main.h"
/**
*  print_square- returns line
*
* @size= number of times
*
*
*/


void print_square(int size)
{
	int x, y;

	if (size < 1)
		_putchar('\n');
	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
			_putchar('#');
		_putchar('\n');
	}
}
