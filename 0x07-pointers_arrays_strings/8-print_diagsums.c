#include "main.h"

/**
  * print_diagsums - prints the sum of the two
  * diagonals of a square matrix of integers.
  * @a: pointer
  * @size: int
  *
  * Return: Nothing.
  */
void print_diagsums(int *a, int size)
{
	int i, j;
	int s1 = 0;
	int s2 = 0;

	for (i = 0; i < size; ++i)
		s1 += (a + i * size)[i];

	for (j = 0; j < size; ++j)
		s2 += (a + j * size)[--i];

	printf("%d, %d\n", s1, s2);
}
