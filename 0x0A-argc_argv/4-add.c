#include "main.h"

/**
  * main - adds positive numbers.
  * @argc: number of parameters
  * @argv: parameter list
  *
  * Return: 0 if success, otherwise 0.
 */
int main(int argc, char **argv)
{
	int i, c = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		c += atoi(argv[i]);
	}

	printf("%d\n", c);

	return (0);
}
