#include "main.h"
#include <stdio.h>

/**
 * _abs - gives absolute number
 *@n: Number
 * Return: 0
 *
 */

int _abs(int n)
{
	if (n >= 0)
		printf("%d", n);
	else
	{
		n =(n * -1);
		printf("%d", n);
	}
	return (0);
}
