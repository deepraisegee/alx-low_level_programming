#include <stdlib.h>
#include "main.h"

/**
  * malloc_checked - allocates memory using malloc
  * @b: unsigned int
  *
  * Return: a pointer
  */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
		exit(98);

	return (p);
}
