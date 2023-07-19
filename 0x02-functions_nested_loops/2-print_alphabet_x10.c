#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int p = 0;
	
	char alpha;

	while (p < 10)
	{
	alpha = 'a';

	while (alpha <= 'z')
	{
	_putchar(alpha);
	alpha++;
	}

	_putchar('\n');
	p++;
	}
}
