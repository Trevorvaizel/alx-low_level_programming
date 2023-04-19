#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicates string
 * @str: string parameter
 *
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	/**new string = *nstr*/
	char *nstr;
	int count = strlen(str);
	int alen = count + 1;
	int i;

	nstr = malloc(sizeof(char) * alen);
	/** we now have the array str */
	if (nstr == NULL)
		return (NULL);
	for (i = 0; i <= alen; i++)
	{
		nstr[i] = str[i];
	}
	return (nstr);
}
