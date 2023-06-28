/*
*Author: Collins Ogera
*Date: 4/5/2023
*/
#include "main.h"

/**
*_memcpy - Copy memory area
*@dest: Destination
*@src: Source
*@n: Number of items to copy
*
*Return: Pointer to destination
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}

	return (dest);
}
