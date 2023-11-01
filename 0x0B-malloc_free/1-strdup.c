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
  * _strdup - returns a pointer to a newly allocated
  * space in memory, which contains a copy of the
  * string given as a parameter.
  * @str: string to fill the allocated space
  *
  * Return: pointer to allocated space.
  */
char *_strdup(char *str)
{
	char *s;
	unsigned int i;
	unsigned int l = _strlen(str);

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(char) * l + 1);

	if (!s)
		return (NULL);

	for (i = 0; i < l; i++)
		s[i] = str[i];

	return (s);
}
