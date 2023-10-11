#include <stdio.h>
#include "main.h"

/**
  * print_last_digit - prints the last digit of a number.
  * @n: number
  *
  * Return: last digit of n
  */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	n %= 10;
	_putchar('0' + n);

	return (n);
}
