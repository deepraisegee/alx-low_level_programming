#include <stdio.h>
#include "main.h"

/**
  * jack_bauer - prints every minute of
  * the day of Jack Bauer, starting from 00:00 to 23:59
  *
  * Return: void
  */
void jack_bauer(void)
{
	int ascii_0 = 48;
	int ascii_column = 58;
	int a = 0, b;

	while (a < 3)
	{
		b = 0;
		while (b < 4)
		{
			_putchar(ascii_0 + a);
			_putchar(ascii_0 + b);
			_putchar(ascii_column);

			b++;
			
			int i = 0, j;
			while (i < 6)
			{
				j = 0;
				while (j < 10)
				{
					_putchar(ascii_0 + i);
					_putchar(ascii_0 + j);
					_putchar('\n');

					j++;
				}

				i++;
			}
			
			a++;
		}
	}
}
