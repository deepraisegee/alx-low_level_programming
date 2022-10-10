#include <stdlib.h>
#include "main.h"

/**
  * _strlen - get the length of a string
  * @s: pointer
  *
  * Return: length of string
  */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
  * string_nconcat - concatenates two strings.
  * @s1: pointer
  * @s2: pointer
  * @n: unsigned integer
  *
  * Return: pointer to a new memory location
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len = _strlen(s1);
	unsigned int s2len = _strlen(s2);
	char *p = calloc(s1len + n + 1, sizeof(*s1));
	unsigned int i, j;

	if (!p)
		return (NULL);

	if (!s1 || !s2)
		return (s1);

	if (n >= s2len)
	{
		for (i = 0; i < s1len; i++)
			p[i] = s1[i];

		for (j = 0; j < s2len; j++)
			p[s1len + j] = s2[j];

		p[s1len + s2len] = '\0';
	}
	else
	{
		for (i = 0; i < s1len; i++)
			p[i] = s1[i];

		for (j = 0; j < n; j++)
			p[s1len + j] = s2[j];

		p[s1len + n] = '\0';
	}

	return (p);
}
