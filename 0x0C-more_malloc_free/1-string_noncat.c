#include "main.h"
#include <stdlib.h>

/**
*string_nconcat - Concat two string
*@s1: String one
*@s2: String two
*@n: S2 bytes to concat
*
*Return: Pointer to new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;
	if (n >= s2len)
		n = s2len;

	res = malloc(sizeof(char) * (s1len + n + 1));
	if (res == NULL)
		return (NULL);

	for (j = 0; j < s1len; j++)
		*(res + j) = *(s1 + j);
	for (i = 0; i < n; i++)
		*(res + s1len + i) = *(s2 + i);
	*(res + s1len + n) = '\0';

	return (res);
}
