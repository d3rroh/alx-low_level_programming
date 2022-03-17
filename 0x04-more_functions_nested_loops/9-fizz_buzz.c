#include <stdio.h>
/**
*  main- start of the program
*
* Return: returns 0 0n success
*
*
*/


int main(void)
{
	int num = 1;

	while (num <=100)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
			num++;
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
			num++;
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
			num++;
		}
		else
		{
			printf("%d ", num);
			num++;
		}
	}
	putchar('\n');
	return (0);
}
