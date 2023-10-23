#include <stdio.h>

/**
  * _strchr - locates a character in a string.
  * @s: string to search through.
  * @c: characher looking for.
  *
  * Return: s.
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (s);
}
