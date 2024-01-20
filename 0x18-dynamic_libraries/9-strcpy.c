#include "main.h"

/**
  * _strcpy - copies the string pointed to by src
  * including the terminating null byte (\0)
  * to the buffer pointed to by dest.
  * @dest: destination
  * @src: source
  *
  * Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;
	int src_l;

	if (!dest || !src)
		return (NULL);

	src_l = _strlen(src);

	for (i = 0; i <= src_l; i++)
		dest[i] = src[i];

	return (dest);
}
