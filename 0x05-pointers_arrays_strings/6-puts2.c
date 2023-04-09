#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints string characters
 * @str: parameter pointer
 *
 * Return: 1
 */

void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		putchar(*(str + i));
	}
	putchar('\n');
}
