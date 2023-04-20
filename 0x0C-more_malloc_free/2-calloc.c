#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory
 * @nmemb: no.of.items
 * @size: size of elements
 *
 * Return:pointer toarr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == 0)
		return (NULL);
	i = 0;
	for (i = 0; i < nmemb; i++)
		arr[i] = 0;
	return (arr);
}
