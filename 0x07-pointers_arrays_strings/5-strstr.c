#include "main.h"

/**
  * _strstr - locates a substring.
  * @haystack: given string
  * @needle: string to locate.
  *
  * Return: pointer if found otherwise NULL.
  */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (needle[j] != haystack[i + j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}

	return (NULL);
}
