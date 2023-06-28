/*
 *Author: Collins Ogera
 *Date: 2/4/2023
 */

#include "main.h"

/**
*_strncpy - Copy string to length n
*@dest: Destination
*@src: Sourcs string
*@n: Max length to copy
*
*Return: Dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	for (; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}
