#include "main.c"
#include "_putchar.c"

/**
 * print_alphabet - prints alphabets
 *
 * Return: void
 *
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while ('a' <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
