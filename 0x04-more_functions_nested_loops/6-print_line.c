#include "main.h"
/**
*  print_line- returns line
*
* @n= number of times
*
*/


void print_line(int n)
{
	while (n>=1)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
