#include "main.h"

/**
 * _strlen_recursion - string legnth
 * @s: parameter
 *
 * Return: void
 */

void _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	return 1 + _strlen_recursion(s + 1);
}
