#include "main.h"
/**
* print_diagonal- returns line
*
* @n= number of times
* Return: nothing
*
*/


void print_diagonal(int n)
{
	int count  = 0, space;

	if (n <= 0)
		_putchar('\n');

	while (count < n)
	{
		for (space = 0; space < count; space++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
		count++;
	}
}
