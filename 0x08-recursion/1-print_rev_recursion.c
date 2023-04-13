#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints string in reverse
 * @s: parameter
 *
 * Return: 0
 *
 */

void _print_rev_recursion(char *s)
{
	int len;

	len = strlen(char *s);
	if (len < 0)
		return;
	_putchar(*(str + len));
	len--;
	/** here its the adress thats changing */
	_print_rev_recursion(s - 1);
}
