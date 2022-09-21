#include <stdio.h>
#include "main.h"

/**
  * print_rev - prints a string, in reverse
  * @s: pointer
  *
  * Return: nothing
  */
void print_rev(char *s)
{
	int n = 0;
	int i;

	while (s[n] != '\n')
	{
		n++;
	}

	for (i = n; i >= 0; i--)
	{
		_putchar(s[i] + '0');
	}

	_putchar('\n');
}
