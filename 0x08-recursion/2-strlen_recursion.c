#include "main.h"

/**
 * _strlen_recursion - prints a string in reverse
 * @s: string
 * Return: pointer
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return 1 + _strlen_recursion((s + 1));
	}
	else
		return 0;
}
