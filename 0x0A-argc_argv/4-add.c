#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - adds positive numbers.
  * @argc: integer
  * @argv: pointer
  *
  * Return: 0 if success otherwise non-zero
  */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int n;

		n = atoi(argv[i]);
		if (!n)
		{
			printf("Error\n");
			return (1);
		}
		sum += n;
	}

	printf("%d\n", sum);

	return (0);
}
