#include "main.h"

/**
  * print_numbers - prints the numbers, from 0 to 9.
  *
  * Return: void
  */
void print_numbers(void)
{
	char d = '0';

	while (d <= '9')
	{
		_putchar(d);
		d++;
	}
	_putchar('\n');
}
