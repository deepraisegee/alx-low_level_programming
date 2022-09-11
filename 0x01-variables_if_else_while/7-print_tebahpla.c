#include <stdio.h>

/**
  * main - print all lower english alphabets
  * i.e a-z in reverse i.e z-a
  *
  * Return: 0
  */
int main(void)
{
	int alpha = 26;
	int a = 97; /* ascii value for letter 'a' */

	int i = alpha;

	while (i > 0)
	{
		i--;
		putchar(a + i);
	}

	putchar('\n');

	return (0);
}
