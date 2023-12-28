#include "main.h"

/**
  * puts_half - prints half of a string, followed by a new line.
  * @str: string to print
  *
  * Return: void
  */
void puts_half(char *str)
{
	int i, j;

	if (!str)
		return;

	for (i = 0; str[i]; i++)
		;

	for (j = i / 2; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
