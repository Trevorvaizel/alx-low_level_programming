#include "main.h"
#include <string.h>

/**
*_strcat - Concat two strings
*@dest: Destination string
*@src: Source string
*
*Return: Return concatenated destination string
*/

char *_strcat(char *dest, char *src)
{
	int i, destLength;

	destLength = strlen(dest);

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + destLength + i) = *(src + i);

	return (dest);
}
