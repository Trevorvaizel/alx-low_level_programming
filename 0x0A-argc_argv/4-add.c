#include <stdio.h>
#include <stdlib.h>

/**
*main - Adds to positive number integer
*@argc: Argument counter
*@argv: Argument vector
*
*Return: On success 0
*/

int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (argv[i] >= 0)
			sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
