#include "main.h"
/**
 * print_rev - prints the reverse of a string
 * @s: string parameter input
 * Return: nothing
 */
void print_rev(char *s)
{
	int lent = 0;

	while (*s != '\0')
	{
		lent++;
		s++;
	}
	s--;
	while (lent > 0)
	{
		putchar(*s);
		s--;
		lent--;
	}
	putchar('\n');
}
