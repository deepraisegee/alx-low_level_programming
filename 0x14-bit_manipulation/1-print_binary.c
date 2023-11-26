#include "main.h"

/**
 * print_bin - prints the binary rep of d
 * @d: decimal number to print
 */
void print_bin(unsigned long int d)
{
	if (d == 0)
		return;

	print_bin(d >> 1);
	_putchar((d & 1) + '0');
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_bin(n);
}
