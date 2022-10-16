#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
  * get_op_func - points to the function that
  * corresponds to the operator given as a parameter
  * @s: char pointer
  *
  * Return: function pointer
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; ops[i].op != NULL; i++)
	{
		if ((strcmp(ops[i].op, "+") || 
				strcmp(ops[i].op, "-") ||
				strcmp(ops[i].op, "*") ||
				strcmp(ops[i].op, "/") ||
				strcmp(ops[i].op, "%")) != 0)
			return (NULL);
	}
}
