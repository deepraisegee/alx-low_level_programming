#include "main.h"

/**
  * _strncat - concatenates two strings.
  * @dest: destination string
  * @src: source string
  * @n: amount of byte
  *
  * Return: pointer to dest.
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; src[j]; j++)
		;

	if (n > j)
		n = j;

	for (k = 0; k < n; k++)
	{
		dest[i] = src[k];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
