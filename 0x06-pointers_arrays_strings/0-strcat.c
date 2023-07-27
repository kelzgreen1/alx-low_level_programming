#include "main.h"
/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer destnation input
 * @src: pointer source input
 *
 * Return: pointer to resulting string @dest
*/
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}
