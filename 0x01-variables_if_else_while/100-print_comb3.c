#include <stdio.h>

/**
  * main - print 2 combination of numbers
  *
  * Return: 0
  */
int main(void)
{
	int fd; /* first digit */
	int sd; /* seconf digit */

	for (fd = '0'; fd <= '9'; fd++)
	{
		for (sd = '0'; sd <= '9'; sd++)
		{
			if (fd == sd)
			{
				fd += 1;
				sd += 1;
			}
			putchar(fd);
			putchar(sd);
			if (fd <= '9' && sd <= '9')
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
