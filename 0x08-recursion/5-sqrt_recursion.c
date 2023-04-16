#include "main.h"
/**
*squareRoot - Calculate Square Root
*@initial: 2
*@end: Param 2
*@m: Value to find sqrt
*
*Return: Squareroot of m
*/

int squareRoot(int initial, int end, int m)
{
	int middle;

	if (end >= initial)
	{
		middle = initial + (end - initial) / 2;
		if (middle * middle == m)
			return (middle);
		if (middle * middle > m)
			return (squareRoot(initial, middle - 1, m));
		if (middle * middle < m)
			return (squareRoot(middle + 1, end, m));
	}
	return (-1);
}

/**
*_sqrt_recursion - Get squareroot using recursion
*@n: Number to obtain sqrt
*
*Return: Squareroot
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (squareRoot(2, n, n));
}
