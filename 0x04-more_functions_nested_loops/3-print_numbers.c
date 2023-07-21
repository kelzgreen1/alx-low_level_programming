#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * followed by a new line
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	char numz;

	for (numz = '0'; numz <= '9'; numz++)

	{
		putchar(numz);
	}
	putchar('\n');
}
