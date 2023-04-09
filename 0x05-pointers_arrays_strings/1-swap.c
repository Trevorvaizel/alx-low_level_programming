#include <stdio.h>
#include "main.h"

/**
 * swap_int - swamps values 
 * @a: parameter 1
 * @b: parameter 2
 * 
 * Return: void
*/

void swap_int(int *a, int *b )
{
    /*initialize the variables*/
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
