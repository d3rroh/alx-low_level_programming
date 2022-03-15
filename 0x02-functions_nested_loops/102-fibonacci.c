#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: Nothing.
 */

int main(void)
{
	long int t1 = 0, t2 = 1, nextTerm = 0, count = 0;

	nextTerm = t1 + t2;

	while (count < 49)
	{
		printf("%li, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
		count++;
	}
	printf("%li\n", t1 + t2);

	return (0);
}
