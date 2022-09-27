#include "main.c"

/**
  * _strspn - gets the length of a prefix substring.
  * @s: pointer
  * @accept: poniter
  *
  * Return: length of matched characters
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while ((*s != ' ') || (*s != '\n'))
	{
		while (*accept != '\n')
		{
			if (*s == *accept)
			{
				count++;
			}
			s++;
		}
		accept++;
	}

	return (count);
}
