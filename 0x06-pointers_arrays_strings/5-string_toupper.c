#include "main.h"

/**
*string_toupper - Convert lowercase to upper
*@a: Pointer to string
*
*Return: pointer to converted string
*/

char *string_toupper(char *a)
{
	int i;

	for (i = 0; *(a + i) != '\0'; i++)
	{
		if ((*(a + i) >= 'a') && (*(a + i) <= 'z'))
			*(a + i) = *(a + i) - 32;
	}

	return (a);
}
