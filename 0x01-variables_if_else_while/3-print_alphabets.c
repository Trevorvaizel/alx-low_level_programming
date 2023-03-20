#include <stdio.h>

/**
 * main - prints alphabets in capital
 *
 * Return: 0
 *
 */

int main(void)
{
	char nest_lower = 'a';
	char nest_upper = 'A';

	while (nest_lower <= 'z')
	{
		putchar(nest_lower);
		nest_lower++;
	}
	while (nest_upper <= 'Z')
	{
		putchar(nest_upper);
		nest_upper++;
	}
	putchar('\n');
	return (0);
}
