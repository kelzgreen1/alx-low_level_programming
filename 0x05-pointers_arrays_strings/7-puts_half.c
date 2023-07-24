#include"main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string parameter input
 *
 * Return: Nothing
*/

void puts_half(char *str)
{
	int i, p;

	for (i = 0; str[i] != '\0'; ++i)
		;

	if (i % 2 == 0)
	{
		for (p = i / 2; str[p] != '\0'; ++p)
			putchar(str[p]);
	} else
	{
		for (p = ((i - 1) / 2) + 1; str[p] != '\0'; ++p)
			putchar(str[p]);
	}
	putchar('\n');
}
