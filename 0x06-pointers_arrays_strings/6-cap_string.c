#include "main.h"

/**
  * cap_string - capitalizes all words of a string.
  * @str: string
  *
  * Return: modified string
  */
char *cap_string(char *str)
{
	int i, j;
	char sep[14] = {' ', '\n',
		',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\0'};

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] != sep[j])
		{
			if (str[i] == '\t' || str[i] == ' ')
			{
				str[i] = ' ';
				str[i + 1] = str[i + 1] - (26 + 6);
				j++;
			}
			else if (str[i] == sep[j])
			{
				str[i + 2] = str[i + 2] - (26 + 6);
				j += 2;
			}
			j++;
		}
		i++;
	}
	return (str);

}
