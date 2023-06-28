/*
*Author: Collins Ogera
*Date: 3/27/2023
*/
#include "main.h"

/**
*_puts - Print a string to stdout
*@str: Pointer to string
*/

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
