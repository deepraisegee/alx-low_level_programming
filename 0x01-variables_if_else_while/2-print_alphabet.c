#include <stdio.h>

/**
  * main - print all alphabets in lowercase
  *
  * Return: 0
  */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
	}
	putchar("\n");

	return (0);
}
