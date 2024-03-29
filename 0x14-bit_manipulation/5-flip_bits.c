#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip.
 * @n: number to flip
 * @m: number
 *
 * Return: the number of bits need to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int b = 0;

	n = n ^ m;
	while (n)
	{
		n &= (n - 1);
		++b;
	}
	return (b);
}
