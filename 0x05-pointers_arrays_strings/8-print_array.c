#include <stdio.h>
#include "main.h"

/**
 * print_array - prints
 * @a: pointer to array
 * @n: array size
 *
 * Return: void
 *
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (i == 0)
		printf("%d", *(a + i));
	for (i = i + 1; i < n; i++)
	{
		printf(", %d", *(a + i));
	}
}
