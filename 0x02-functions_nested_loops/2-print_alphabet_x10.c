#include "main.h"
/**
* print_alphabet_x10 - prints lower case alphabets
*
*/


void print_alphabet_x10(void)
{
	int i = 0;
	while (i < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
