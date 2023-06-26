#include "main.h"

/**
*_strpbrk - Search a string for set of bytes
*@s: String to search
*@accept: Bytes to search
*
*Return: Pointer to s matching bytes in accept
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&(s[i]));
		}
	}
	return (0);
}
