#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates
 * @s1: parameter 1
 * @s2: parameter 2
 *
 * Return: pointer to s3
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i;
	int len;
	int c1;
	int c2;
	int j;

	/**find the string lenths of both */
	c1 = strlen(s1);
	c2 = strlen(s2 + 1);
	len  = strlen(s1) + strlen(s2 + 1);
	s3 = malloc(sizeof(char) * len);
	/**check for malloc faliure*/
	if (s3 == NULL)
		return (NULL);
	/** add c1 */
	for (i = 0; i <= c1 && i <= len; i++)
	{
		s3[i] = s1[i];
	}
	/** add c2 */
	while (i <= len && j <= c2)
	{
		j = 0;
		s3[i] = s2[j];
		i++;
		j++;
	}
	return (s3);
	free(s3);
}
