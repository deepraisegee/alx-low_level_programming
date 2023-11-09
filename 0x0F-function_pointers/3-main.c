#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
  * main - perform arithmetic calculation from user inputs
  * @argc: number of arguments
  * @argv: list of arguments
  *
  * Return: 0
  */
int main(int argc, char **argv)
{
	int a, b, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = func(a, b);
	printf("%d\n", result);
	return (0);
}
