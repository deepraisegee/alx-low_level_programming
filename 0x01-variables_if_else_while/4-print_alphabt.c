#include <stdio.h>

/**
  * main - print lower alphabet except 'q'
  *
  * Return: 0
  */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp == 'e' || alp == 'q')
			alp += 1;
		putchar(alp);
		alp++;
	}
	putchar('\n');

	return (0);
}
