#include <stdio.h>

/**
  * main - print all combination of number
  *
  * Return: 0
  */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;

		if (n <= '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
