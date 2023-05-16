#include "main.h"
#include <stdlib.h>

/**
 * get_size - gets the size of the binary array
 * @x: the passed parameter
 *
 * Return: sum
 */

unsigned long int get_size(int x)
{
	int sum = 0;

	for (; x > 0; )
	{
		if (x % 2 == 1)
		{
			x = ((x - 1) / 2);
			sum += 1;
		}
		else
		{
			x = (x / 2);
			sum += 1;
		}
	}
	return (sum);
}

/**
 * get_binary - gets the binary of a number
 * @x: passed parameter
 *
 * Return: bin
 */

unsigned long int *get_bin(int x)
{
	unsigned long int *bin;
	unsigned long int sum = get_size(x);
	unsigned long int i;

	/** assign malloc **/
	bin = (unsigned long int *) malloc(sizeof(unsigned long int) * sum);
	/**test for malloc */
	if (bin == NULL)
	{
		return (NULL);
	}
	/** create bin array **/
	for (; x > 1 ;)
	{
		for (i = 0; i < sum; i++)
		{
			if (x % 2 == 1)
			{
				x = ((x - 1) / 2);
				bin[i] = 1;
			}
			else
			{
				x = x / 2;
				bin[i] = 0;
			}
		}
	}
	return (bin);
}

/**
 * get_bit - gets bit of a particular given index
 * @n: provided parameter
 * @index: index
 *
 * Return: index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = index;
	int value;
	unsigned long int *bin;

	/** get pointer to binary **/
	bin = get_bin(n);
	value = bin[i];

	return (value);
}


