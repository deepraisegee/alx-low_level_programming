#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_numbers - prints numbers, followed by a new line.
  * @separator: string to be printed between numbers
  * @n: number of parameters
  *
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", va_arg(args, int));
		else
			printf("%d%s", va_arg(args, int), separator);
	}
	printf("\n");
}
