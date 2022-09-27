#include "main.h"

/**
  * _strlen - get the length of a string
  * @s: pointer
  *
  * Return: the length of a string
  */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] >= '\0')
	{
		len++;
	}

	return (len);
}

/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: pointer
  * @accept: pointer
  *
  * Return: the address of the first occurrence character in the string 
  */
char *_strpbrk(char *s, char *accept)
{
	int s_len = _strlen(s);
	int accept_len = _strlen(accept);

	int i;
	int j;

	for (i = 0; i < s_len; i++)
	{
		for (j = 0; j < accept_len; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}

	return (NULL);
}
