#include "main.h"

/**
 *get_bit - Get bit at index
 *@n: Integer
 *@index: Position
 *
 *Return: Bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x = 0;

	while (n > 0)
	{
		if (x == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n / 2;
		x++;
	}

	if (index > x)
		return (0);

	return (-1);
}
