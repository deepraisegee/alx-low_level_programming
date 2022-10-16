#include <stdlib.h>
#include "function_pointers.h"

/**
  * int_index - searches for an integer.
  * @array: int pointer
  * @size: int
  * @cmp: function pointer
  *
  * Return: int
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (!array || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		x = cmp(array[i]);
		if (x == 1)
			return (i);
	}

	return (-1);
}
