/* Author: trevor 
 * Date: 4.30.223
 *
 */

#include <stdargs.h>
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
	var_list args;

	if  (n == 0)
	{
		return (0);
	}
	/** initialize the first n **/
	var_start (args, n);
	for (i = 0; i < n; i++)
	{
		sum += (var_arg(args, int));
	}
	var_end(args);

	return (sum);
}


