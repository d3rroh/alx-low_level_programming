#include "main.h"
/**
* _isdigit - returns if its upper or not
*
* @c: number to be checked if lower case, type int
* Return: 1 if number, 0 otherwise
*/


int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
