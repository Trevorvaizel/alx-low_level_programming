#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - array itratot
 * @array: pointer to array
 * @size: array size
 * @action: action intended
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	/** initialize the array */
	array = malloc(sizeof(int) * size);
	i = 0;
	for (i = 0; i < size; i++)
	{
		action(*(a + i));
	}
}
