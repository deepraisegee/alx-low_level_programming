#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_all - prints anything.
  * @format: format
  *
  * Return: void
  */
void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char *s;

	va_start(args, format);

	i = 0;
	while (format && format[i])
	{
		switch (format[i++])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			break;
		default:
			continue;
		}

		if (format[i])
			printf(", ");
	}

	printf("\n");

	va_end(args);
}
