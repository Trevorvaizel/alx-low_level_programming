#include <stdio.h>

/**
 * main - prints numbers to base
 *
 * Return: 0;
 *
 */

int main(void)
{
	int octo;
	int hext;

	octo = 0;
	hext = 'a';
	while (octo < 10)
	{
		putchar(octo + '0');
		octo++;
	}
	while (hext <= 'f')
	{
		putchar(hext);
		hext++;
	}
	putchar('\n');
	return (0);
}
