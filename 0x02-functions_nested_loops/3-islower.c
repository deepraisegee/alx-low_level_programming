#include <stdio.h>

/**
  * _islower - checks if an alphabet is lower or not
  *
  * @c: ascii decimal
  *
  * Return: 1 if it's lower, otherwise 0
  */
int _islower(int c)
{
	int ascii_a = 97;
	int ascii_z = 122;

	if ((c >= ascii_a) && (c <= ascii_z))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
