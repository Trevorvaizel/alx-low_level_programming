#include "main.h"

/**
 * int _islower - prints lower
 * 
 * Return: 1 if lower
 *
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
