#include <stdio.h>
#include "main.h"

/**
  * print_numbers - prints the numbers,
  * from 0 to 9, followed by a new line
  *
  * Return: nothing
  */
void print_numbers(void)
{
	int ascii_0 = 48;
	int i = 0;

	while (i < 10)
	{
		_putchar(ascii_0 + i);
		i++;
	}

	_putchar('\n');
}
