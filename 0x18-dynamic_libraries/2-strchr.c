/*
*Author: Collins Ogera
*Date: 4/5/2023
*/
#include "main.h"

/**
*_strchr - Locate character in string
*@s: String
*@c: Character to check
*
*Return: Pointer to first occurrence of c
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
