#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Creates a random number and prints it to the output
 *
 * Description: creates a random variable number every time the program
 * executes and prints it to the output.
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
