#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_strings - prints strings, followed by a new line
  * @separator: char pointer
  * @n: const unsigned integer
  *
  * Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	if (n == 0)
		return;

	va_start(args, n);

	i = 0;
	do {
		s = va_arg(args, char*);
		if (!s)
			printf("(nil)");
		if (!separator)
			printf("%s", s);
		else
		{
			printf("%s", s);
			if (i == n - 1)
				break;
			printf("%s", separator);
		}
		i++;
	} while (i < n);

	printf("\n");
}
