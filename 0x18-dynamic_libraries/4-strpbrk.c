#include "main.h"

/**
  * _strpbrk - searches a string for any of a set of bytes.
  * @s: string to search in.
  * @accept: text to check
  *
  * Return: s.
  */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}

	return (NULL);
}
