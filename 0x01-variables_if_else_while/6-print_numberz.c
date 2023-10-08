#include <stdio.h>

/**
  * main - print all digits with no char type
  *
  * Return: 0
  */
int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
