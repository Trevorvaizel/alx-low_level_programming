#include <stdio.h>

/**
*main - Starting point
*
*Return: 0 as default
*/

int main(void)
{
	int a;
	char b;
	long c;
	long long d;
	float e;

	printf("Size of a char: %lu byte(s)\n", sizeof(b));
	printf("Size of an int: %lu byte(s)\n", sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float int: %lu byte(s)\n", sizeof(e));

	return (0);
}
