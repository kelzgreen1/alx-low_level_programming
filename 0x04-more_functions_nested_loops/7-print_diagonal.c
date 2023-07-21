#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the
 * terminal
 * @n: Where n is the number of times the character \ should be printed
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
		int i, j;

		if (n <= 0)
		{
			putchar('\n');
			return;
		}

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
}
