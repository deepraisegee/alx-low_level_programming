#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * puts2 - prints every other character
  * of a string, starting with the first character
  * @str: pointer
  *
  * Return: nothing
  */
void puts2(char *str)
{
	int n = strlen(str);
	int i;

	for (i = 0; i < n; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
