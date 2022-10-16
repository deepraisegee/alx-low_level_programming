#include <stdlib.h>
#include "function_pointers.h"

/**
  * array_iterator - executes a function given as a
  * parameter on each element of an array
  * @array: int pointer
  * @size: unsigned int
  * @action: funtion pointer
  *
  * Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		exit(1);

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
