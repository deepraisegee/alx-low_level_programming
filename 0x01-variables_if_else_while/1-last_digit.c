#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - print the last digit of random number
  *
  * Return: 0
  */
int main(void)
{
	int n;
	int ld; /* last_digit */
	int np = 0; /* n_positive */

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (n < 0)
	{
		np *= -1;
		ld = np % 10;
	}

	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}

	return (0);
}
