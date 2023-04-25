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
	ret = cmp(array[i]);

	if (array == NULL || size <= 0)
	{
		return (-1);
	}
	/** checks whether there is a return value */
	for (i = 0; i < size; i++)
	{
		if (ret != 0)
			return (i);
	}

	return (-1);
}
