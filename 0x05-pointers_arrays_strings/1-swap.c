#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: the integer parameter 1
 * @b: the integer parameter 2
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int mid;

	mid = *a;
	*a = *b;
	*b = mid;
}
