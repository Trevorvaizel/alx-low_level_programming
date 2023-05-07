/**
 * Author: trevor
 * Date: 4.30.223
 *
 */

#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - prints sum of all numbers
 * @n: parameters
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list args;

	if  (n == 0)
	{
		return (0);
	}
	/** initialize the first n **/
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += (va_arg(args, int));
	}
	va_end(args);

	return (sum);
}


