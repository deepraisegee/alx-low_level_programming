#include "function_pointers.h"

/**
  * array_iterator - executes a function given as
  * a parameter on each element of an array.
  * @array: Array on int values
  * @size: size of the array
  * @action: funtion to execute on elements in array
  *
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
