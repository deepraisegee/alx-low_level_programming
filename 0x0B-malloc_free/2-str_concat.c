#include <stdlib.h>
#include "main.h"


/**
  * _strlen - get the length of a string
  * @s: pointer
  *
  * Return: length of the string
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
  * str_concat - concatenates two strings
  * @s1: pointer
  * @s2: pointer
  *
  * Return: concatinate s1 and s2
  */
char *str_concat(char *s1, char *s2)
{
	int s1len = _strlen(s1);
	int s2len = _strlen(s2);

	char *string = malloc(sizeof(*s1) * (s1len + s2len) + 1);
	int i = 0;
	int j = 0;

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);

	if (!string)
		return (NULL);

	while (i < s1len)
	{
		string[i] = s1[i];
		i++;
	}

	while (j < s2len)
	{
		string[s1len + j] = s2[j];
		j++;
	}

	string[s1len + s2len] = '\0';

	return (string);
}
