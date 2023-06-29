#include "main.h"

/**
*_abs - Compute absolute value
*@a: Integer to compute
*
*Return: absolute value
*/

int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}
