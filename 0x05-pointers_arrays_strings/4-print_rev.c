#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * print_rev - prints a string, in reverse
  * @s: pointer
  *
  * Return: nothing
  */
void print_rev(char *s)
{
	int len, i;

	len = strlen(s) - 1;

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
