#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_numbers - prints numbers, followed by a new line
  * @separator: char pointer
  * @n: const unsigned integer
  *
  * Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, x;

	if (n == 0)
		return;

	va_start(args, n);
	
	i = 0;
	do {
		x = va_arg(args, int);
		if (!separator)
			printf("%d", x);
		else
		{
			printf("%d", x);
			if (i == n - 1)
				break;
			printf("%s", separator);
		}
		i++;
	} while (i < n);

	printf("\n");
}
