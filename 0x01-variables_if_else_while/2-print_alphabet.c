#include <stdio.h>

/**
  * main - print all english alphabets
  * in lowercase i.e a-z
  *
  * Return: 0
  */
int main(void)
{

	int alpha = 26;
	int a = 97;

	int i = 0;

	do {
		putchar(a + i);
		i++;
	} while (i < alpha);

	putchar('\n');

	return (0);
}
