#include "main.h"


/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base number
 * @y: exponent
 *
 * Return: x raised to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1); /* error */
	}
	else if (y == 0)
	{
		return (1); /* base case */
	}
	else
	{
		return (x * _pow_recursion(x, y - 1)); /* recursive call */
	}
}
