#include <stdio.h>

/**
 * main- prints no. of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 *
 */

int main(int argc, char *argv[])
{
	argc = argc - 1;
	printf("%d\n", argc);

	return (0);
}
