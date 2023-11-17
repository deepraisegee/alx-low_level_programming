#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_strings - prints numbers, followed by a new line.
  * @separator: string to be printed between numbers
  * @n: number of parameters
  *
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			str = "(nil)";

		if (i == (n - 1))
			printf("%s", str);
		else
			printf("%s%s", str, separator);
	}
	printf("\n");
}
