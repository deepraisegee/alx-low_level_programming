#include "main.h"

/**
  * rev_string - reverse a string.
  * @s: string to reverse
  *
  * Return: void.
  */
void rev_string(char *s)
{
	int i, j, length;

	for (i = 0; s[i]; i++)
		;

	length = i;
	for (j = 0; (i - 1) >= 0; j++)
	{
		if (i == j)
			break;
		s[j] = s[--i];
	}
	s[length] = '\0';
}
