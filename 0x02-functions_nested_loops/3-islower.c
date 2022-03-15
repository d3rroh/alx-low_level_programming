#include "main.h"
/**
* _islower - returns if its lower or not
*
*/


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
