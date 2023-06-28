/*
*Author: Collins Ogera
*Date: 3/27/2023
*/

#include "main.h"

/**
*_strlen - Length of a string
*@s: Pointer to string
*
*Return: Length of string
*/
int _strlen(char *s)
{
	int len, i;

	len = 0;

	for (i = 0; *s != '\0'; i++)
	{
		len++;
		s++;
	}

	return (len);
}
