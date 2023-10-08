#include <stdio.h>

/**
  * main - print all aphabets
  *
  * Return: 0
  */
int main(void)
{
	char alp = 'a';

	while (alp != 'Z' + 1)
	{
		putchar(alp);
		if (alp == 'z')
		{
			alp = 'A' - 1;
		}
		a++;
	}
	putchar('\n');

	return (0);
}
