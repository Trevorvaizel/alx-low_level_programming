#include <stdio.h>
#include "main.h"

/**
 * _puts - prints line
 * @str: parameter
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;
	for (i=0; *(s+i) != '\0'; i++)
	{
		putchar(*(str + i));
	}
	putchar ('\n');
}
