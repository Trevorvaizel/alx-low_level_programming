#include <stdio.h>
#include <stdargs.h>

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
	var_list args;
	unsigned int i;
	unsigned int value;

	var_start(args, n);
	for (i = 0; i < n; i++)
	{
		value = var_arg(args, unsigned int);
		if (seperator == NULL)
		{
			printf(" %d", value);
		}
		else 
		{
			printf(" %d%s", value, seperator);
		}
	}
	printf("\n");
}
