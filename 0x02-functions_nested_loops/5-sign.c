#include <stdio.h>

/**
  * print_sign - prints the sign of a number
  *
  * @n: an interger
  *
  * Return: 1 if n is +ve, 0 if it's zero or -1 if it's -ve
  */
int print_sign(int n)
{
	int ascii_plus = 43;
	int ascii_minus = 45;
	int ascii_zero = 48;

	if (n > 0)
	{
		_putchar(ascii_plus);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(ascii_zero);
		return (0);
	}
	else
	{
		_putchar(ascii_minus);
		return (-1);
	}
}
