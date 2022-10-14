#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_all - prints anything
  * @format: const char pointer
  *
  * Return: nothing
  */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, n = strlen(format);

	va_start(args, format);
	for (i = 0; i < n; i++)
	{
		if (format[i] == 'c')
		{
			char c = va_arg(args, int);

			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			int d = va_arg(args, int);

			printf("%d", d);
		}
		else if (format[i] == 'f')
		{
			float f = va_arg(args, double);

			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			char *s = va_arg(args, char*);

			if (!s)
				printf("(nil)");
			else
				printf("%s", s);
		}
		else
			continue;
	}
	va_end(args);
	printf("\n");
}
