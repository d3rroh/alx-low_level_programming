#include "main.h"
/**
*  print_line- returns line
*
* @n= number of times
*
*/


void print_line(int n)
{
	int count  = 0;

	while (count < n)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
