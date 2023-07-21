#include "main.h"

/**
 * print_most_numbers - pritns numbers 0 to 9
 * except 2 and 4
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	char p;

	for (p = '0'; p <= '9'; p++)

	{
		if (p != '2' && p != '4')
		{
			putchar(p);
		}
	}
	putchar('\n');
}
