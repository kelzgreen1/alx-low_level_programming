#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to a new string containing the concatenated arguments,
 *         or NULL if ac == 0 or av == NULL or if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
int i, j, k;
int len = 0;
char *str;

if (ac == 0 || av == NULL)

return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
len++;
}

str = malloc(sizeof(char) * len);

if (str == NULL)

return (NULL);

k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
str[k++] = av[i][j];
str[k++] = '\n';
}
str[k] = '\0';

return (str);

}
