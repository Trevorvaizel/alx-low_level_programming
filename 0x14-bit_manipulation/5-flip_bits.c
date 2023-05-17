#include "main.h"

/**
 *flip_bits - Return number of bits needed to flip
 *@n: First bit
 *@m: Second bit
 *
 *Return: Summation
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = 0, sum = 0;

	a = n ^ m;

	while (a)
	{
		if (a & 1)
			sum++;
		a >>= 1;
	}
	return (sum);
}
