#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: a pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int len;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1;
	dup_str = malloc(sizeof(char) * len);
	if (dup_str == NULL)
		return (NULL);
	strcpy(dup_str, str);
	return (dup_str);
}
