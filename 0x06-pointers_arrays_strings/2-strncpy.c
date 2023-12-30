#include "main.h"

/**
  * _strncpy - copies a string.
  * @dest: destination
  * @src: source
  * @n: number of byte to copy
  *
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if (!dest || !src)
		return (NULL);

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
