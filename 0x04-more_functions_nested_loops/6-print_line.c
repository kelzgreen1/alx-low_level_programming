#include "main.h"

/**
 * print_line - draws a straight line
 * @n: the number to be used
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
