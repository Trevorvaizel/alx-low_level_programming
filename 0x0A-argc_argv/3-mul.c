#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 number
 * @argc: count
 * @argv: vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int x;
	int multi;

	if (argc < 2 && argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	x = atoi(argv[2]);
	multi = i * x;
	printf("%d\n", multi);

	return (0);
}
