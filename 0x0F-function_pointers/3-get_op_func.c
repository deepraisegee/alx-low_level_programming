#include <stdio.h>
#include "3-calc.h"

/**
  * get_op_func - selects the correct function to
  * perform the operation asked by the user.
  * @s: operator provided by user
  *
  * Return: right funtion to perform the calculation
  */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op)
	{
		if (*s == ops[i].op[0])
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
