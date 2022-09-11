#include <stdio.h>

/**
  * main - print base 10 digits from 0-9
  * using ascii characters
  *
  * Return: 0
  */
int main(void)
{
	int ascii_0 = 48; /* decimal value for 0 in ascii chars table */

	int i, base = 10;

	for (i = 0; i < base; i++)
	{
		putchar(ascii_0 + i);
	}

	putchar('\n');

	return (0);
}
