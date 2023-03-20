#include <stdio.h>

/**
 * main - prints all the alphabet
 *
 * Return: 0
 *
 */

int main(void)
{
	char nest = 'a';

	while (nest <= 'z')
	{
		if ((nest != 'e') && (nest != 'q'))
			putchar(nest);
		nest++;
	}
	putchar('\n');
	return (0);
}
