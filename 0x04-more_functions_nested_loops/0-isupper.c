#include "main.h"

/**
 * _isupper - the program checks for upper case characters
 * @c: the character to be checked
 * Return: Returns 1 if c is uppercase or
 * 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
