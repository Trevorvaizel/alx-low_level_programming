#include "main.h"

/**
*print_last_digit - Function to print last digit.
*@a: Number
*
*Return: last digit
*/

int print_last_digit(int a)
{
	int c;

	if (a < 0)
	{
		c = a * -1;
		return (c % 10);
	}
	else
		return (a % 10);
}
