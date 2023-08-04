#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: pointer to string to search
 * @needle: pointer to substring to locate
 *
 * Return: pointer to beginning of located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n == *haystack && *n != '\0' && *haystack != '\0')
		{
			haystack++;
			n++;
		}

		if (*n == '\0')
			return (h);

		haystack = h + 1;
	}

	return (NULL);
}
