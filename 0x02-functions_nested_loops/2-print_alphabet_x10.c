#include "main.h"

/**
 * print_alphabet_x10 - prints x10
 *
 * Return: 0
 *
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0, i < 10, i++)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
	}
}
