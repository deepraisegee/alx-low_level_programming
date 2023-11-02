#include "main.h"

/**
  * malloc_checked - allocates memory using malloc.
  * @b: number of byte
  *
  * Return: pointer to the new allocated memory, otherwise 98.
  */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (!p)
		exit(98);

	return (p);
}
