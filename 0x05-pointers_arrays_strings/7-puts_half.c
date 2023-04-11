#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints yada yada
 * @len: sring legnth
 * @half: half string
 * @str: parameter
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len;
	int half;

	for (len = 0; *(str + len) != '\0'; len++)
	{
	}
	if (len % 2 != 0)
	{
		half = (len - 1) / 2;
		while (half <= len)
		{
			putchar(*(str + half));
			half++;
		}
	}
	else
	{
		half = len / 2;
		while (half <= len)
		{
			putchar(*(str + half));
			half++;
		}
	}
}
