#include "main.h"

/**
  * set_string - sets the value of a pointer to a char.
  * @s: first string
  * @to: second string
  *
  * Return: void.
  */
void set_string(char **s, char *to)
{
	while (**s != '\0')
	{
		**s = *to;
		s++;
		to++;
	}
}
