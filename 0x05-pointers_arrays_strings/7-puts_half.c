#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * puts_half - print the second half of the string
  * @str: pointer
  *
  * Return: nothing
  */
void puts_half(char *str)
{
	int len = strlen(s) - 1;
	int n = len / 2;
	int i;

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
