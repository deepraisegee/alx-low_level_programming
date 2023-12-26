#include "main.h"

/**
  * rev_string - reverse a string.
  * @s: string to reverse
  *
  * Return: void.
  */
void rev_string(char *s)
{
	int i, j;
	char tmp;

	if (s == NULL)
		return;

	for (i = 0; s[i]; i++)
		;

	j = 0;
	i--;
	while (j <= i)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		j++;
		i--;
	}
}
