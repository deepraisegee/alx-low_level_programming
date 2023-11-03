#include "main.h"

/**
  * array_range - creates an array of integers.
  * @min: minimum value
  * @max: maximum value
  *
  * Return: the pointer to the newly created array
  */
int *array_range(int min, int max)
{
	int i;
	int *a;
	int range;

	if (min > max)
		return (NULL);

	range = max - min;
	a = malloc(sizeof(int) * range + 1);

	if (a == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		a[i - min] = i;

	return (a);
}
