#include <stdio.h>

/**
  * main - print base 16 digits in lower case
  *
  * Return: 0
  */
int main(void)
{
	int ascii_0 = 48;
	int ascii_a = 97;

	int i, j;

	for (i = 0; i < 10; i++)
	{
		putchar(ascii_0 + i);
	}

	for (j = 0; j < 6; j++)
	{
		putchar(ascii_a + j);
	}

	putchar('\n');

	return (0);
}
