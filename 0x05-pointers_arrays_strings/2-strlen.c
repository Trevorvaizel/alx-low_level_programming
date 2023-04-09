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

	for (i = 0; *(s + i) !='\0'; i++)
		return (i);
}
