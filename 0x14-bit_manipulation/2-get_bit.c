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
 * 
