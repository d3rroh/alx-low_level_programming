#include <stdio.h>

/**
 * main - print number of arguments entered
 * @argc: number of arguments
 * @argv: arguments entered
 * Description: print number of arguments
 * Return: return zero
 **/

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
