#include <stdio.h>
/**
* main -indicates the start of the code
*
*
* Return: returns zero on success
*/

int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if ((i < j))
			{
				putchar(i);
				putchar(j);
				if ((j < '9') | (i < '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
