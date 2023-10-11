#include <stdio.h>
#include "main.h"

/**
  * print_alphabet - prints the alphabet in lowercase.
  *
  * Return: Nothing
  */
void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}
