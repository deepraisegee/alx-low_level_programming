#include <stdio.h>
#include "main.h"

/**
  * _strlen - get the length of a string
  * @s: pointer
  *
  * Return: int -> length of a string
  */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}
