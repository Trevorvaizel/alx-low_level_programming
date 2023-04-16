#include "main.h"

/**
*reverse_array - Function to rev an array
*@a: Pointer to array
*@n: Length of array
*/


void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - 1];
		a[n - i - 1] = temp;
	}
}
