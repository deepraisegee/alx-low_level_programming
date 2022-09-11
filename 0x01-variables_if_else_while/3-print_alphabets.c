#include <stdio.h>

/**
  * main - print out all english alphabets
  * int lower case and upper case
  *
  * Return: 0
  */
int main(void)
{

	int alpha = 26;
	int a = 97;
	int A = 65;

	int i, j;

	for (i = 0; i < alpha; i++)
	{
		putchar(a + i);
	}

	for (j = 0; j < alpha; j++)
	{
		putchar(A + j);
	}

	putchar('\n');

	return (0);
}
