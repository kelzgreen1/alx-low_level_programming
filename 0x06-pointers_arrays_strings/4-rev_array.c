#include "main.h"
/**
 * reverse_array - a function that reverses the
 *                content of an array of integers
 * @a: pointer to int array
 * @n: is the number of elements to swap
 * Return: nothing
*/
void reverse_array(int *a, int n)
{
	int p, tem;

	for (p = 0; p < n / 2; p++)
	{
		tem = a[p];
		a[p] = a[n - p - 1];
		a[n - p - 1] = tem;
	}
}
