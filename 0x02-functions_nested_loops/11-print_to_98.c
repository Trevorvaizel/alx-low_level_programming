#include "main.h"

/**
 * print_to_98 - does just that
 *@n: input
 *
 * Return:0
 *
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		n++;
	}
	printf('\n');
}
