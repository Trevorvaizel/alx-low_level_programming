#include <stdio.h>

/**
*main - Starting point of program
*
*Return: 0 as default value
*/

int main(void)
{

	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');

			if (a == 8 && b == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
