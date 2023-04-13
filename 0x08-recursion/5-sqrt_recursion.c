#include "main.h"

/**
 * _sqrt_recursion(int n);
 * @n: integer
 *
 * Return: -1,0
 *
 */
int _sqrt_recursion(int n)
{
	int odd;

	odd = 1;
	if (n < 0)
	{
		return (-1);
	}
	else if(n == 0)
	{
		return (n + _sqrt_recursion(n - odd));
	}
	odd = odd - 2;
}
