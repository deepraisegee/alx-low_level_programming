#include "main.h"

/**
  * _strlen - returns the length of a string.
  * @s: string value
  *
  * Return: lenght of s.
  */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	return (i);
}

/**
  * _strcmp - compare 2 strings
  * @s1: string 1
  * @s2: string 2
  *
  * Return: 0 if equal, otherwise non-zero
  */
int _strcmp(char *s1, char *s2)
{
	int i;
	int s1_l = _strlen(s1);
	int s2_l = _strlen(s2);

	if (s1_l < s2_l)
		return (-1);
	else if (s1_l > s2_l)
		return (1);

	for (i = 0; s1[i]; i++)
	{
		if (s1[i] != s2[i])
			return (-1);
	}
	return (0);
}
