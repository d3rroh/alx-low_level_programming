#include <stdio.h>
/**
* main -indicates the start of the code
*
*
* Return: returns zero on success
*/

int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (k = 48; k <= 57; k++)
		{
			for (j = 48; j <= 57; j++)
			{
				if ((i < k) && (k < j))
				{
					putchar(i);
					putchar(k);
					putchar(j);
					if ((i + j + k) < 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
