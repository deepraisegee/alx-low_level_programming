#include <stdio.h>

/**
  * main - print all digits
  *
  * Return: 0
  */
int main(void)
{
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
}
