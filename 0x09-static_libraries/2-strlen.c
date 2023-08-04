#include "main.h"
/**
*_strlen - returns the length of a string
*@s: the memory address of the first character in the string
*Return: length of the string
*/
int _strlen(char *s)
{
	int lent = 0;

	while (*s != '\0')
	{
		lent++;
		s++;
	}
	return (lent);
}
