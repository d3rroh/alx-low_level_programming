#include "main.h"
/**
* print_most_numbers- returns numbers
*
*/


void print_most_numbers(void)
{
	int ch = 48;

	while (ch <= 57)
	{
		if ((ch == 50) || (ch == 52))
			ch++;
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
