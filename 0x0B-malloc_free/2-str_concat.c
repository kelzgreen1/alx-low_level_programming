#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 *
 * Return: a pointer to the concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	size_t len1, len2, total_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2 + 1;

	concat_str = malloc(sizeof(char) * total_len);
	if (concat_str == NULL)
		return (NULL);

	strcpy(concat_str, s1);

	strcat(concat_str, s2);

	return (concat_str);
}
