#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - sum all the parameters given
  * @n: const unsigned integer
  * @...: va
  *
  * Return: the sum of the arguments
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, x = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x += va_arg(args, int);
	}

	va_end(args);

	return (x);
}
