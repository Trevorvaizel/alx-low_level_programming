/*
*Author: Collins Ogera
*Dare: 2/4/2023
*/

#include "main.h"
#include <string.h>

/**
*_strcmp - Compare to strings
*@s1: First stirng
*@s2: Second string
*
*Return: 0 if equal, 1 if greater, -1 if less
*/

int _strcmp(char *s1, char *s2)
{
	int s1Length, s2Length, i;

	s1Length = strlen(s1);
	s2Length = strlen(s2);

	if (s1Length == s2Length)
	{
		for (i = 0; i < s1Length; i++)
		{
			if (*(s1 + i) == *(s2 + i))
				return (0);
			else
				return (s1[i] - s2[i]);
		}
	}
	else if (s1Length > s2Length)
		return (s1[i] - s2[i]);
	else
		return (s2[i] - s1[i]);
}
