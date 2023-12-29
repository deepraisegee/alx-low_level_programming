#include <stdlib.h>
#include "main.h"

/**
  * _pow - calculate the power of number
  * @a: base
  * @b: index
  *
  * Return: a^b
  */
unsigned int _pow(unsigned int a, unsigned int b)
{
	if (b == 0)
		return (1);

	return (a * _pow(a, b - 1));
}

/**
  * rev_int - reverse an integer
  * @n: number to reverse
  *
  * Return: reversed number
  */
unsigned int rev_int(unsigned int n)
{
	unsigned int r = 0;

	while (n != 0)
	{
		r = r * 10 + (n % 10);
		n /= 10;
	}

	return (r);
}

/**
  * _atoi - convert a string to an integer.
  * @s: string to convert
  *
  * Return: converted integer
  */
int _atoi(char *s)
{
	unsigned int i, c, r, is_neg = 0;

	if (!s)
		exit(EXIT_FAILURE);

	i = 0;
	c = 0;
	r = 0;
	while (s[c] != '\0')
	{
		if (s[c] == '-')
			is_neg = is_neg == 0 ? 1 : 0;
		if (s[c] >= '0' && s[c] <= '9')
		{
			r += (s[c] - '0') * _pow(10, i);
			i++;

			if (!(s[c + 1] >= '0' && s[c + 1] <= '9'))
				break;
		}
		c++;
	}

	if (i == 0)
		return (0);

	if (s[c] == '0')
		r = rev_int(r) * 10;
	else
		r = rev_int(r);

	if (is_neg)
		return (-r);
	return (r);
}
