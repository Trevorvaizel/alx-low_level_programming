#include <stdio.h>

/**
 * main - counts numbers from 10
 *
 * Return: 0
 *
 */

int main(void)
{
	int nest;

	while (nest < 10)
	{
		putchar(nest + '0');
		nest++;
	}
	putchar('\n');
	return (0);
}
