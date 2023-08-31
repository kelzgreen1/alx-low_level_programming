#include <stddef.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if ((n >> i) == 0)
			break;

		mask = mask << 1;
	}

	for (; mask != 0; mask = mask >> 1)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');
	}
}
