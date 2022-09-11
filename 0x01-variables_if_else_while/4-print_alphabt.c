#include <stdio.h>

/**
  * main - print out all english alphabets
  * except for 'e' and 'q'
  *
  * Return: 0
  */
int main(void)
{
	/* equivalent decimal value in ascii chars table */
	int a = 97;
	int e = 101;
	int q = 113;

	int alpha = 26;

	int i, character;

	for (i = 0; i < alpha; i++)
	{
		character = a + i;

		if (character == e || character == q)
		{
			continue;
		}

		putchar(character);
	}

	putchar('\n');

	return (0);
}
