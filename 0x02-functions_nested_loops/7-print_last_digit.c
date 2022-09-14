#include <stdio.h>

/**
  * print_last_digit - print the last digit of a given number
  * @n: an integer
  *
  * Return: the last digit of a given number
  */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	return (last_digit);
}
