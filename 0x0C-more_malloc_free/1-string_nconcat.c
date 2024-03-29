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
	unsigned int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;

	n = n > j ? j : n;
	s = malloc(sizeof(char) * (i + n + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s[i] = s1[i];

	for (j = 0; j < n; j++)
		s[i + j] = s2[j];

	s[i + j] = '\0';

	return (s);
}
