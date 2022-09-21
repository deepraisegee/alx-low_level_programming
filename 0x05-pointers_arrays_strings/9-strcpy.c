#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * _strcpy - copies the string pointed to
  * by src, including the terminating
  * null byte (\0), to the buffer pointed to by dest
  *
  * @dest: pointer
  * @src: pointer
  *
  * Return: pointer
  */
char *_strcpy(char *dest, char *src)
{
	int len = strlen(src);
	int i;

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
