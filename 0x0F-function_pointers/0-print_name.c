#include <stdlib.h>
#include "function_pointers.h"

/**
  * print_name - prints a name.
  * @name: char pointer
  * @f: function pointer
  *
  * Return: nothing
  */
void print_name(char *name, void (*f)(char *))

{
	if (!f)
		exit(1);

	f(name);
}
