#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - prints arrays
 * @min: minumum
 * @max: maximum
 *
 * Return: pointer to array
 *
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;
	int count;

	if (min > max)
	{
		return (NULL);
	}
	/** allocate the memory */
	else
	{
		count = (max - min) + 1;
		arr = malloc(count * sizeof(int));
		if (arr == 0)
			return (NULL);
		/**lets key in the values **/
		i = 0;
		for (i = 0; i < count; i++)
		{
			while (min <= max)
			{
				*(arr + i) = min;
				min++;
			}
		}

		return (arr);
	}
}
