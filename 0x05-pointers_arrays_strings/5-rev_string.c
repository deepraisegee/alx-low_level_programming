#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * rev_string - reverses a string
  * @s: pointer
  *
  * Return: nothing
  */
void rev_string(char *s)
{
	int len, i = 0;
	char temp;

	len = strlen(s) - 1;

	while (i < len)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;

		len--;
		i++;
	}

}
