#include "main.h"

/**
  * _memset - fills memory with a constant byte.
  * @s: char pointer
  * @b: byte to fill
  * @n: nth area of memory
  *
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
