#include "main.h"

/**
 * print_last_digit - last digit printer
 *@n: the input
 * Return: 0
 *
 */

int print_last_digit(int n)
{
	int last_digit = (n % 10);
	_putchar(last_digit + '0');

	return (last_digit);
}
