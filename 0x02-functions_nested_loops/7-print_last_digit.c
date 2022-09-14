#include <stdio.h>
#include "main.h"

/**
  * print_last_digit - print the last digit of a given number
  * @n: an integer
  *
  * Return: the last digit of a given number
  */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		last_digit *= (-1);
		_putchar(last_digit);
		return (last_digit);
	}
	else
	{
		_putchar(last_digit);
		return (last_digit);
	}

}
