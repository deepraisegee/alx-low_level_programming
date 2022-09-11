#include <stdio.h>

/**
  * main - print base 10 digits separated
  * by comma and space
  *
  * Return: 0
  */
int main(void)
{
	int ascii_0 = 48;
	int ascii_space = 32;
	int ascii_comma = 44;

	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(ascii_0 + i);

		if (i < 9)
		{
			putchar(ascii_comma);
			putchar(ascii_space);
		}
	}

	putchar('\n');

	return (0);
}
