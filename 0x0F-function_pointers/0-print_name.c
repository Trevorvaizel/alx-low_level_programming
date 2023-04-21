#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "_putchar.c"

/**
 * f  - prints individual characters
 * @char: input
 *
 * Return: void
 */

void (*f)(char*)
{
	*(f) = &_putchar;
	f();
}

/**
 * print_name - function prints name
 * @f: pointer to putchar function
 *
 * Return: void 
 */

void print_name(char *name, void (*f)(char*))
{
	int len;
	int index;

	f = &_putchar;
	/** get the legnth of name **/
	len  = strlen(name) + 1;
	/** initialize name **/
	name = malloc(sizeof(char) * len);
	index = 0;
	if (name != NULL)
	{
		for (index = 0; index < len; index++)
		{
			f(*(name + index));
		}
		f("\0");
		f("\n");
	}
	else 
		return(NULL);
}
