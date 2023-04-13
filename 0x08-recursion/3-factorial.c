#include "main.h"

/**
 * factorial - gets factorial
 * @n: - factor
 *
 * Return 0;
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n-1));
	}
}
