#include "main.h"
#include <stdlib.h>
#include <math.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars.
 *
 * Return: converted number or 0 if one number isnt 1 or 0
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int index;
	unsigned int value;
	int count = strlen(b);

	/**check for availability of invalid figures **/
	for (index = 0; index < count; index++)
	{
		if (*(b + index) != '0' && *(b + index) != '1')
		{
			return (0);
		}
		if (*(b + index) == '1' && index < (count - 1))
		{
			value = pow(2, index);
			sum += value;
		}
		else
		{
			value = 1;
			sum += value;
		}
	}
	return (sum);
}
