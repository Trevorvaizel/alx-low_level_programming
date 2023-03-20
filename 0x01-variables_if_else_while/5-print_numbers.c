#include <stdio.h>

/**
 * main - prints all numers
 *
 * Return: 0
 *
 */

int main(void)
{
	int nest;

	while (nest < 10)
	{
		printf("%d", nest);
		nest++;
	}
	printf("\n");
	return (0);
}
