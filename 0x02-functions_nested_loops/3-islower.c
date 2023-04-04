#include "main.h"

/**
 * _islower - prints lower
 *@c: character to check
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
