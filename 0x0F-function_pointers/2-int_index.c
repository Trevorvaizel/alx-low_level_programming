#include "function_pointers.h"
#include <stdlib.h>

/**
 *int_index - Search for an integer
 *@array: Element to compare
 *@size: Size of array
 *@cmp: Pointer to comparison int
 *Return: Index of first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, c;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		c = cmp(array[i]);
		if (c != 0)
			return (i);
	}
	return (-1);
}
