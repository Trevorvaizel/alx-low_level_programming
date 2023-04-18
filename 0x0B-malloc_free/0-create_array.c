#include "main.h"
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
 * Return: 0, NULL, NULL
 *
 */

char *create_array(unsigned int size, char c)
{
	int *arr;
	int i;
	int arri;
	char *str;

	/** check if size is zero*/
	if (size == 0)
		return (NULL);
	/**create memory in space for array*/
	arr = malloc(sizeof(char) * size);
	/**space has been created
	 * now initialize characters in c to each memory block
	 */
	arri = size - 1;
	str = c;
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= arri; i++)
	{
		arr[i] = str[i];
	}

	return (0);
}
