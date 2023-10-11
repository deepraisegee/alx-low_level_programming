#include <stdio.h>
#include "main.h"

/**
  * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
  *
  * Return: Nothing
  */
void print_alphabet_x10(void)
{
	char alp = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (alp <= 'z')
		{
			_putchar(alp);
			alp++;
		}
		_putchar('\n');
	}
}
