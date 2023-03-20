#include <stdio.h>

/**
 * main - displas characters
 *
 * Return: 0
 *
 */

int main(void)
{
	char nest = 'a';

	while (nest <= 'z')
	{
		putchar(nest);
		nest++;
	}
	putchar('\n');
	return (0);
}
