#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates
 * @s1: ipointer to parameter 1
 * @s2: pointer to parameter 2
 * @n: size 
 *
 * Return: pointer to new memory
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	unsigned int j;
	unsigned int c1;
	unsigned int c2;
	unsigned int count;

	c1 = strlen(s1);
	if (c1 < 1)
		c1 = 0;
	c2 =strlen(s2);
	if (c2 < 1)
		c2 = 0;
	if (n > c2)
		n = c2;
	count = c1 + c2;
	/** set malloc memory */
	str = (sizeof(char) * count);
	/**check malloc **/
	if (str == NULL)
		return (NULL);
	/** add s1 **/
	i = 0;
	for ( i = 0; i < c1; i++)
	{
		str[i] = s1[i];
	}
	j = 0;
	for ( j = 0; j < c2; j++)
	{
		str[i + j] = s2[j];
	}



