/*
*Author: Collins Ogera
*Date: 2/4/2023
*/
#include "main.h"
#include "string.h"

/**
*_strncat - Concat two strings to length n
*@dest: Destination string
*@src: Source string
*@n: Max length to cpoy from src
*
*Return: Concatenated dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int length, i;

	length = strlen(dest);

	for (i = 0; i < n && (*(src + i) != '\0'); i++)
		*(dest + length + i) = *(src + i);
	return (dest);
}
