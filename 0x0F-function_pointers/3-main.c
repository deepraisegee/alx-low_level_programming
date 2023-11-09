#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2][0];
	if (op != '+' || op != '*' || op != '-' || op != '/' || op != '%')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	result = get_op_func(argv[2])(a, b);

	printf("%d\n", result);

	return (0);
}
