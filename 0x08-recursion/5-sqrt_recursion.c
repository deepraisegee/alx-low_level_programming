#include "main.h"

/**
  * _sqrt_recursion - get the natural square root of a number.
  * @n: integer
  *
  * Return: squre root of n
  */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);

	return (n / _sqrt_recursion(n * 0.5));
}
