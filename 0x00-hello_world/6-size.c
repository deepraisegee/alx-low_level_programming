#include <stdio.h>

/**
  * main - print different size od data type.
  *
  * Return: 0
  */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of a int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %ls byte(s)\n", (long int) sizeof(int));
	printf("Size of a long long int: %ls byte(s)\n", (long long) sizeof(int));
	printf("Size of a float: %f byte(s)\n", sizeof(float));

	return (0);
}
