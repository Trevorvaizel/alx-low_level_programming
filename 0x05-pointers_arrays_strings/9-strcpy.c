#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies
 * @dest: destination
 * @src: source
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	/**declaration of variables*/
	int index;
	int len;

	/* get the size of the string **/
	for (len = 0; *(src + len) != '\0'; len++)
	{
	}
	/*now i have the len of string*/
	for (index = 0; *(src + index) != '\0'; index++)
	{
		*(dest + index) = (*src + index);
	}
	*(dest + len) = *(src + len);

	return (dest);
}
