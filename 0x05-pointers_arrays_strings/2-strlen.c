#include <stdio.h>
#include "main.h"

/**
 * _strlen - checks the size of string
 *
 * @s: parameter 
 *
 * Return:1
 */

int _strlen(char *s)
{
	/* declare the variables*/
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (*(s + 0) != '\0')
	{
		i++;
		sum++;
	}
	return (sum);
}
