#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - checks malloc
 * @b: parameter
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(int) * b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return ((void *)ptr);
}
