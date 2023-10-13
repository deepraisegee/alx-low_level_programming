#include "main.h"

/**
  * print_most_numbers - prints the numbers, from 0 to 9.
  * except 2 and 4.
  *
  * Return: void.
  */
void print_most_numbers(void)
{
	char d = '0';

	while (d <= '9')
	{
		if (d == '2' || d == '4')
			continue;
		_putchar(d);
	}
	_putchar('\n');
}
