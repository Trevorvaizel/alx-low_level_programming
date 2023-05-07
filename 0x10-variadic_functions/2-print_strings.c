#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings
 * @seperator: seperators
 * @n: values
 *
 * Return: void
 *
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char value;

	va_start(arg, n);
	for (i = 0;  i < n; i++)
	{
		value = va_arg(arg, unsigned int);
		if (value == NULL)
		{
			value = "(nil)";
		}
		if (seperator == NULL)
		{
			printf("%s", value);
		}
		else
		{
			printf("%s%s", value, seperator);
		}
	}
	printf("\n");
}
