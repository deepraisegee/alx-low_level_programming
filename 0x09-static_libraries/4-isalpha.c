#include <stdio.h>

/**
  * _isalpha - checks if an argument is an
  * alphabet or not
  *
  * @c: ascii decimal
  *
  * Return: 1 if it's an alphabet, otherwise 0
  */
int _isalpha(int c)
{
	int ascii_A = 65;
	int ascii_Z = 90;

	int ascii_a = 97;
	int ascii_z = 122;

	int is_A_Z = (c >= ascii_A) && (c <= ascii_Z);
	int is_a_z = (c >= ascii_a) && (c <= ascii_z);

	if (is_A_Z || is_a_z)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
