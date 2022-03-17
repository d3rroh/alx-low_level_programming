#include "main.h"
/**
* _isupper - returns if its upper or not
*
* @c: character to be checked if lower case, type int
* Return: 1 if lower case, 0 otherwise
*/


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
