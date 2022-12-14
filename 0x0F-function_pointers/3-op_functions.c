#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * op_add - add two integers
  * @a: int
  * @b: int
  *
  * Return: Sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtract toe integers
  * @a: int
  * @b: int
  *
  * Return: Difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiply two integers
  * @a: int
  * @b: int
  *
  * Return: Product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides a by b
  * @a: int
  * @b: int
  *
  * Return: Division on a by b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - fine the remainder
  * @a: int
  * @b: int
  *
  * Return: Remainder from a / b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
