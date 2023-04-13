#include "main.h"

/**
 * _pow_recursion - calculates to factorial
 * @x: parameter
 * @y: parameter
 *
 * Return:0, -1
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recurstion(x, y-1));
	}
}
