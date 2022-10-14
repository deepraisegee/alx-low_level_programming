#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * _strlen - get the length of a string
  * @s: char pointer
  *
  * Return: the length of a string
  */
int _strlen(const char * const s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
  * print_all - prints anything
  * @format: const char pointer
  *
  * Return: nothing
  */
void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	int n = _strlen(format);

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
