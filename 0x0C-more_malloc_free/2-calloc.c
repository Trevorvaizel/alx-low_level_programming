#include "main.h"
#include <stdlib.h>

/**
*_calloc -  Allocate memory using malloc
*@nmemb: Number of elements
*@size: Bytes of each element
*
*Return: Pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(ptr + i) = 0;
	return (ptr);
}
