#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints functions
 * @seperator: pointer to seperator
 * @n: arguments
 *
 * Return: n
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	/**initialize the var list variable */
	va_list args;
	unsigned int i;
	unsigned int value;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, unsigned int);
		if (seperator == NULL || i == (n - 1))
		{
			printf("%d", value);
		}
		else
		{
			printf("%d%s", value, seperator);
		}
	}
	printf("\n");
}
