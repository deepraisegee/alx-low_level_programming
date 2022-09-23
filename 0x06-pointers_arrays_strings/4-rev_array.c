#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers
  * @a: pointer
  * @n: integer
  *
  * Return: nothing
  */
void reverse_array(int *a, int n)
{

	int *aEnd = (a + n - 1);

	while (a <= aEnd)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
			{
				break;
			}

			_putchar(*a);
			_putchar(',');
			_putchar(' ');
		}

		a++;
	}
}
