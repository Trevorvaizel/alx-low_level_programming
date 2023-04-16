#include "main.h"

/**
*_isdigit - Check if number is digit
*@c: Number to check
*
*Return: 1 for true, 0 for false
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
