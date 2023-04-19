#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - allocate grid
 * @width: parameter 1
 * @height: parameter 2
 *
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int w;
	int h;
	int *ptr;
	int count;

	if (width <= 0 && height <= 0)
		return (NULL);
	/** assign memory to arrays */
	count = width * height;
	ptr = malloc(sizeof(int) * count);
	/** check for malloc */
	if (ptr == NULL)
		return (NULL);
	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			*(ptr + (width * count + height)) = 0;
			width++;
		}
		*(ptr + (width * count + height)) = 0;
		h++;
	}
	return (ptr);
}
