#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: pointer to array
 * @size: array size
 * @cmp: compare function
 *
 * Return: 1, 0, -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int ret;

	i = 0;
	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	/** checks whether there is a return value */
	while (i < size)
	{
		ret = cmp(array[i]);
		if (ret == 0)
			i++;
		return (i);
	}
	return (-1);
}
