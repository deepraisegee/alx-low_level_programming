#include "main.h"

/**
  * print_rev - prints a string, in reverse.
  * @s: string to print
  *
  * Return: void.
  */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i]; i++)
		;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');
}
