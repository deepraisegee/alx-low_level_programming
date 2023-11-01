#include "main.h"

/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers.
  * @width: width of the array
  * @height: height of the array
  *
  * Return: pointer to the array
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (!a)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (!a[i])
		{
			while (i)
				free(a[i--]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}

	return (a);
}
