#include "main.h"

/**
 * _div - find out if the number has exact division between a number
 * @x: number
 * @y: divisor
 *
 * Return: natural square root of n
 */
int _div(int x, int y)
{
	if ((y * y) == x)
		return (y);

	if ((y * y) > x)
		return (-1);

	return (_div(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	return (_div(n, 1));
}
