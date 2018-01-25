#include <stdio.h>

/**
 * main - finds the sum of all the evenly divisible numbers
 * of 3 or 5
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int sum;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;

		++i;
	}

	printf("%d\n", sum);

	return (0);
}
