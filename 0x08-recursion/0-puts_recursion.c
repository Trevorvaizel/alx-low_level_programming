#include "main.h"

/**
 * _print_rev_recursion - prints string
 * @str: parameters
 *
 * Return: void
 *
 */

void _print_rev_recursion(char *s)
{
	if (*str == '\0')
	{
		_putchar('\n');
		return (0);
	}
	_putchar(*str);
	_putchar(*(str + 1));
}
