#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of bytes to allocate
 *
 * Return: Pointer to allocated memory
 *         Exits with status value of 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(98);
	}

	return (p);
}
