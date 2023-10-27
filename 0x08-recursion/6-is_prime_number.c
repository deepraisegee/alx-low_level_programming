#include "main.h"

/**
 * _aux - find out exact divider
 * @x: number
 * @y: divisor
 *
 * Return: exact div.
 */
int _aux(int x, int y)
{
	if (y >= x)
		return (1);
	if (x % y == 0 && x != y)
		return (0);
	return (_aux(x, y + 1));
}

/**
 * is_prime_number - get if number is a prime number or not.
 * @n: number
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_aux(n, 2));
}
