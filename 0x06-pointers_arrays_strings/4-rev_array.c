#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers.
  * @a: the array
  * @n: the number of elements of the array
  *
  * Return: Nothing
  */
void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;
	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		i++;
		n--;
	}
}
