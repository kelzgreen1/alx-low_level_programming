#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	int digit, sign = 1;

	if (n < 0)
	{
	sign = -1;
	n = -n;
}
	if (n == 0)
{
	putchar('0');
}
	while (n > 0)
{
	digit = n % 10;
	n = n / 10;
	putchar(digit + '0');
}
	if (sign == -1)
{
	putchar('-');
}
}
