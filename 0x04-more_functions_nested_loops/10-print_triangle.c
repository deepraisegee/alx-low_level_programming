#include "main.h"

/**
  * print_triangle - prints a triangle, followed by a new line.
  * @size: the size of the triangle
  *
  * Return: Nothing
  */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	k = size - 1;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < k)
				_putchar(' ');
			else
				_putchar('#');
		}
		k--;
		_putchar('\n');
	}
}
