#include "main.h"

/**
  * _strlen - return the length of a string
  * @str: string
  *
  * Return: length of str
  */
unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (*str++ != '\0')
		i++;

	return (i);
}

/**
  * str_concat - concatenates two strings.
  * @s1: string 1
  * @s2: string 2
  *
  * Return: pointer to new string
  */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, j;
	unsigned int l1 = _strlen(s1);
	unsigned int l2 = _strlen(s2);

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	s = malloc(sizeof(char) * l1 + l2 + 1);

	if (!s)
		return (NULL);

	for (i = 0; i < l1; i++)
		s[i] = s1[i];
	for (j = 0; j < l2; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';

	return (s);
}
