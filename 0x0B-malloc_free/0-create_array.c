#include <stdlib.h>
#include "main.h"

/**
  * create_array - creates an array of chars,
  * and initializes it with a specific char.
  * @size: unsigned integer
  * @c: character
  *
  * Return: NULL is size is 0 otherwise a pointer
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *string = malloc(sizeof(c) * size);

	if (size == 0)
		return (NULL);

	if (!string)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		string[i] = c;
	}

	string[size] = '\n';

	return (string);
}
