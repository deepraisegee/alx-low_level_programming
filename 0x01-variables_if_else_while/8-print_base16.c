#include <stdio.h>

/**
  * main - print base 16 numbers
  *
  * Return: 0
  */
int main(void)
{
	char n = '0';

	while (n != 'f' + 1)
	{
		putchar(n);
		n++;

		if (n == '9' + 1)
			n = 'a';
	}
	putchar('\n');

	return (0);
}
