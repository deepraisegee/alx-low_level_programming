#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _strlen - get the lenghth of a string
  * @s: pointer
  *
  * Return: length of s
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
  * _strdup - returns a pointer to a newly
  * allocated space in memory, which contain
  * a copy of the string given as a parameter.
  * @str: pointer
  *
  * Return: pointer to a string if success otherwise NULL
  */
char *_strdup(char *str)
{
	int i;
	int n = _strlen(str);
	char *string = malloc(sizeof(*str) * n);

	if (!str)
		return (NULL);

	if (!string)
		return (NULL);

	for (i = 0; i < n; i++)
		string[i] = str[i];

	string[n] = '\0';

	return (string);
}
