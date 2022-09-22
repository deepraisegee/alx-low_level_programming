#include "main.h"


/**
  * _strlen - get the length of a string
  * @s: pointer
  *
  * Return: int -> length of a string
  */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}


/**
  * _strcat - concatenates two strings
  * @dest: pointer
  * @src: pointer
  *
  * Return: concatinated string
  */
char *_strcat(char *dest, char *src)
{
	char *string;
	int n = _strlen(dest) - 1;

	int *pDest = dest + n;

	src = pDest;
	string = dest;

	return (string);
}
