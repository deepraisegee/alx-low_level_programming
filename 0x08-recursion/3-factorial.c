#include "main.h"

/**
  * factorial - get the factorial of a given number.
  * @n: integer
  *
  * Return: n!
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
