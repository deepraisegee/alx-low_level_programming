#include "main.h"

/**
  * create_array - creates an array of chars
  * and initializes it with a specific char.
  * @size: number of byte.
  * @c: character
  *
  * Return: pointer to the array if created, otherwise NULL
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (!array)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
