#include <stdio.h>
/**
* main -indicates the start of the code
*
*
* Return: returns zero on success
*/

int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
