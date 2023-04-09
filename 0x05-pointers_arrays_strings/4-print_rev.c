#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints reverse
 * @s: parameter
 *
 * Return: void
 *
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	/* i = the string legnth*/
	for (i = i - 1; i >= 0; i--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}
