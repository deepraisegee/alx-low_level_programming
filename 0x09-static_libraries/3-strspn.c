#include <stdio.h>

/**
  * _strspn - gets the length of a prefix substring.
  * @s: string to check
  * @accept: string to compare
  *
  * Return: position of macth.
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int count = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (count);
	}

	return (0);
}
