#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

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
	char *value;

	va_start(arg, n);
	for (i = 0;  i < n; i++)
	{
		value = va_arg(arg, char *);
		if (value == NULL)
		{
			printf("(nil)");
		}
		if (seperator == NULL || i == (n - 1))
		{
			printf("%s", value);
		}
		else
		{
			printf("%s%s", value, seperator);
		}
	}
	printf("\n");
	va_end(arg);
}
