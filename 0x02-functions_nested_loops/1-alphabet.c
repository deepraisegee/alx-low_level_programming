#include <stdio.h>

/**
  * print_alphabet - print all english alphabets
  * in lower
  *
  * Return: void
  */
void print_alphabet(void)
{
	int ascii_a = 97;
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(ascii_a + i);
	}

	putchar('\n');

}
