#include <stdio.h>
/**
* main -indicates the start of the code
*
*
* Return: returns zero on success
*/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
