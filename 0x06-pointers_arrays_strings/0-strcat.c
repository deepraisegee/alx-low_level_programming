#include "main.h"

/**
  * _strcat - concatenates two strings.
  * @dest: destination string
  * @src: source string
  *
  * Return: pointer to dest.
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[1] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}