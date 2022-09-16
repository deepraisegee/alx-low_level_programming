#include <stdio.h>

/**
  * _isdigit - checks for a digit (0 through 9)
  * @c: an integer
  *
  * Return: 1 or 0
  */
int _isdigit(int c)
{
	int ascii_0 = 48;
	int ascii_9 = 57;

	if ((c >= ascii_0) && (c <= ascii_9))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
