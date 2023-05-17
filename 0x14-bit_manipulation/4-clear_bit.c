#include "main.h"

/**
 * clear_bit - clears bit
 * @n: pointer to number
 * @index: index
 *
 * Return: 1 if its worked
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n &= (~(1UL << index))) ? 1 : -1);
}
