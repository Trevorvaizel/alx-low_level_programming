#include "main.h"

/**
*_islower - Check for lowercase characters
*@c: Character to check
*
*Return: 1 of lower else 0
*/

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}
