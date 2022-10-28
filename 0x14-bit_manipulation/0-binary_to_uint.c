#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: const char pointer
  *
  * Return: the converted number
  */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int uint = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		uint <<= 1;

		if (b[i] == '1')
			uint += 1;
	}

	return (uint);
}
