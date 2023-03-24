#include "main.h"

/**
*print_line - Prnit n lines using an underscore
*@n: Number of times to draw _
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
