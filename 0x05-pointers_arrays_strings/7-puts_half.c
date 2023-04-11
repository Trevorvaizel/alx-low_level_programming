#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half the string
 * @len: string legnth
 * @index: string indexes 
 * @half: half string
 *
 * Return:void
 */

void puts_half(char *str)
{
        int len;
	int half;

        for(len = 0; *(str + len) != '\0'; len++)
        {
        }
        /** we now have a legnth */
        /** check whether len is */
        if (len % 2 != 0)
        {
                half = (len - 1) / 2;
                /** here we already have half the index*/
                /** next step is to instruct it where to begin */
                while (half <= len)
                {
			putchar(*(str + half));
			half++;
                }
        }
        else
	{
		half = len / 2;
		while (half <= len)
		{
			putchar(*(str + half));
			half++;
		}
	}
}
