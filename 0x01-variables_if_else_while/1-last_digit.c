#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Prints random number and message depending on number
 *
 * Description: This function creates a random number, prints the
 * number to the screen and a specific message depending on the
 * last digit of the random number
 * Return: 0
 */
int main(void)
{
	int n, k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;

	if (k > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, k);
	}
	else if (k < 6 && k != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, k);
	}
	else if (k == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, k);
	}

	return (0);
}
