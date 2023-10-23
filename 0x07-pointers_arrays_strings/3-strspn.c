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

	for (i = 0; i != '\0'; i++)
	{
		for (j = 0; j != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
			else
				break;
		}
	}

	return (count);
}
