#include <stdio.h>

/**
  * print_alphabet_x10 - prints all english alphabets
  * tem times, all in lower case
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
	int ascii_a = 97;
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			putchar(ascii_a + j);
		}
		putchar('\n');
	}
}
