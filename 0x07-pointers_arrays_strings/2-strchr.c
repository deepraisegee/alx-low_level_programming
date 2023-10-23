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
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (s[i] == c)
			return (&(s[i]));
	}

	return (NULL);
}
