#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char p;

	c = 'a';

	p = 'A';

	while
	(c <= 'z')
	{
	putchar(c);
	c++;
	}
	while
	(p <= 'Z')
	{
	putchar(p);
	p++;
	}
putchar('\n');
return (0);
}
