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
	int hex = 97;

	while(num < 58)
	{
		putchar(num);
		num++;
	}
	while(hex < 103)
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');
	return (0);
}
