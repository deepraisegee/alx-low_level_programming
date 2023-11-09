#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * op_add - adds two numbers
  * @a: 1st number
  * @b: 2nd number
  *
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts two numbers
  * @a: 1st number
  * @b: 2nd number
  *
  * Return: difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies two numbers
  * @a: 1st number
  * @b: 2nd number
  *
  * Return: product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides two numbers
  * @a: 1st number
  * @b: 2nd number
  *
  * Return: division of a and b
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
  * op_mod - remainder of division of two numbers
  * @a: 1st number
  * @b: 2nd number
  *
  * Return: remainder of a divided by b
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

