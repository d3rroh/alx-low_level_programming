#include "main.h"
/**
* _islower - returns if its lower or not
*
* @c: character to be checked if lower case, type int
* Return: 1 if lower case, 0 otherwise
*/


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
