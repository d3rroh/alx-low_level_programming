#include <stdio.h>

/**
* main -indicates the start of the code
*
*
* Return: returns zero on success
*/

int main(void)
{
	int intType;
	int longIntType;
   	int floatType;
    	int longLongIntType;
    	int charType;
    	
    	printf("Size of char: %d byte(s)\n", sizeof(charType));
    	printf("Size of int: %d byte(s)\n", sizeof(intType));
    	printf("Size of long int: %d byte(s)\n", sizeof(longIntType));
    	printf("Size of long long int: %d byte(s)\n", sizeof(longLongIntType));
    	printf("Size of float: %d byte(s)\n", sizeof(floatType));
    	
    	
    	return (0);
}
