#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h;

	for (h = 0; h <= 23; h++)
	{
		int m = 0;

		while (m <= 59)
		{
			_putchar (h / 10 + '0');
			_putchar (h %  10 + '0');
			_putchar (':');
			_putchar (m / 10 + '0');
			_putchar (m % 10 + '0');
			_putchar ('\n');

			m++;

		}
}
}
