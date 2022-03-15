#include "main.h"
/**
 * print_last_digit - prints last digit
 * @num: number to compute last digit for
 * Return: last digit
 **/


int print_last_digit(int num)
{
	num = num % 10;

	if (num < 1)
		num = -num;
	_putchar(num + '0');
	return (num);
}
