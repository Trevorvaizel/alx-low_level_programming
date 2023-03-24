#include "main.h"

/**
*_isupper - Check for uppercase character
*@c: Character to be checked
*
*Return: 1 if upper, else 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
