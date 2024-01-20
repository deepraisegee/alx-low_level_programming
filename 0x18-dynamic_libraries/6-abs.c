#include <stdio.h>
#include "main.h"

/**
  * _abs - computes the absolute value of an integer.
  * @n: number to check
  *
  * Return: positive n.
  */
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
