#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: pointer
  * @s2: pointer
  *
  * Return: 1 for 'true' otherwise 0
  */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2++)
		if (*s1++ == 0)
			return (0);
	return (*(unsigned char *)s1 - *(unsigned char *) --s2);
}
