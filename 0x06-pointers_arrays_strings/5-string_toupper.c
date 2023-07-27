#include "main.h"
/**
 * string_toupper - a function that changes all
 *             lowercase letters of a string
 *             to uppercase.
 * @str : pointer to input char
 * Return: @str
*/
char *string_toupper(char *str)
{
	int p;

	for (p = 0; str[p] != '\0'; p++)
	{
		if (str[p] >= 'a' && str[p] <= 'z')
		{
			str[p] = str[p] - ('a' - 'A');
		}
	}
	return (str);
}
