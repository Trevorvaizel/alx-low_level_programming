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

	len = strlen(s) - 1;

/**
*_print_rev_recursion - Preint string in reverse
*@s: Pointer to string
*/
void _print_rev_recursion(char *s, len)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
};
	/** this terminates the code */
	if (len < 0)
		return;
	/**this prints the last string */
	_putchar(*(s + len));
	len--;
	/** here its the adress thats changing */
	_print_rev_recursion( s + (len - 1));
}
