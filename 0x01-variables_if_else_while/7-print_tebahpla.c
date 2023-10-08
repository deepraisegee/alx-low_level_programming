#include <stdio.h>

/**
  * main - print alphabet in reverse order
  *
  * Return: 0
  */
int main(void)
{
	char alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');

	return (0);
}
