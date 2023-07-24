#include"main.h"

/**
 * puts2 - prints every character of a string
 *
 * @str: string parameter input
 *
 * Return: Noting
*/

void puts2(char *str)
{
	int p;

	for (p = 0; str[p] != '\0'; ++p)
	{
		if (p % 2 == 0)
			putchar(str[p]);
	}
	putchar('\n');
}
