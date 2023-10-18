#include "main.h"

/**
  * _strlen - returns the length of a string.
  * @s: string value
  *
  * Return: lenght of s.
  */
int _strlen(char *s)
{
	int c = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		c++;
		i++;
	}

	return (c);
}
