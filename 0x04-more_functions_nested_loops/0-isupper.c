#include <stdio.h>

/**
  * _isupper - checks for uppercase character
  * @c: an integer
  *
  * Return: 1 or 0
  */
int _isupper(int c)
{
	int ascii_A = 65;
	int ascii_Z = 90;

	if ((c >= ascii_A) && (c <= ascii_Z))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
