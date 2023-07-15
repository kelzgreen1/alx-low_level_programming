#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int p;

	for (n = 48; n <= 56; n++)
{
	for (p = 49; p <= 57; p++)
	{
		if (p > n)
		{
			putchar(n);
			putchar(p);
			if (n != 56 || p != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
