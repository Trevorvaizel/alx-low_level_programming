#include <stdio.h>
#include <stdlib.h>

/**
 * Author: Trevor
 * Date: 4.19.2023
 */

/**
 * *create_array: returns pointer to created array
 * @size: array size
 * @c: characters to be initialized
 *
 * Return: pointer to array
 *
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;
	int arri;
	char *str = c;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	arri = size - 1;
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= arri; i++)
	{
		arr[i] = str[i];
	}

	return (arr);
	free(arr);
}
