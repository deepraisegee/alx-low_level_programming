#include "main.h"

/**
  * string_toupper - changes all lowercase letters of a string to uppercase.
  * @str: string
  *
  * Return: the modified string
  */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - (26 + 6);
		i++;
	}
	return (str);
}
