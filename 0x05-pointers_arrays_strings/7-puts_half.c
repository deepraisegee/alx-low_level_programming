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

	if ((i % 2) != 0)
		j = (i / 2) + 1;
	else
		j = i / 2;

	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}

	_putchar('\n');
}
