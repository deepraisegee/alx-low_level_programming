#include <stdio.h>
#include "main.h"

/**
  * print_number - prints the numbers,
  * from 0 to 9, followed by a new line
  *
  * Return: nothing
  */
void print_number(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i);
	}

	_putchar('\n');
}
