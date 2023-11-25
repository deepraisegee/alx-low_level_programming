#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int.
  * @b: string of binary digits
  *
  * Return: the decimal number if b
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int d = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		d = d * 2 + *b - '0';
		b++;
	}

	return (d);
}
