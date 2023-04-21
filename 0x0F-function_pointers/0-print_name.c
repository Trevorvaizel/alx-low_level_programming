#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "_putchar.c"

/**
 * print_name - function prints name
 * @name: pointer to a name
 * @f: pointer to function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
