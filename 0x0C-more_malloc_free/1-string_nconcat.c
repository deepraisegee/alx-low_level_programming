#include "main.h"

/**
  * string_nconcat - concatenates two strings.
  * @s1: first string
  * @s2: second string
  * @n: number of s2 byte
  *
  * Return: pointer to the new string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, x, y;
	char *s;

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	if (n < j)
		j = n;
	if (s1 == NULL)
		i = 0;
	if (s2 == NULL)
		j = 0;

	s = malloc(sizeof(char) * i + j + 1);

	if (!s)
		return (NULL);

	for (x = 0; s1[x]; x++)
		s[x] = s1[x];

	for (y = 0; y < j; y++)
		s[x++] = s2[y];

	return (s);
}
