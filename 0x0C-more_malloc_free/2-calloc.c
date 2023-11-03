#include "main.h"

/**
  * _calloc - allocates memory for an array, using malloc.
  * @nmemb: number of elements in the array
  * @size: size of byte of each element
  *
  * Return: eturns a pointer to the allocated memory.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		m[i] = 0;

	return (m);
}
