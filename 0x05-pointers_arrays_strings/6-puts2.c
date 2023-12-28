#include "main.h"

/**
  * puts2 - prints every other character of a string
  * starting with the first character
  * @str: string to print
  *
  * Return: void
  */
void puts2(char *str)
{
	int i, j;

	if (!str)
		return;

	for (i = 0; str[i]; i++)
		;

	for (j = 0; j < i; j += 2)
		_putchar(str[j]);
	_putchar('\n');
}
