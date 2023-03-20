#include <stdio.h>

/**
 * main - prints alphabets backwards
 *
 * Return: 0
 *
 */

int main(void)
{
	char nest;

	nest = 'z';
	while (nest >= 'a')
	{
		putchar(nest);
		nest--;
	}
	putchar('\n');
	return (0);
}
