#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps values
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

