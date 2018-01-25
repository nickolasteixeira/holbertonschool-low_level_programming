#include <stdio.h>

/**
 * main - prints first 50 Fibonacci number
 *
 * Return: 0;
 */

int main(void)
{
	int i = 1;
	long int a = 1, b = 1, c = 2;

	while (i < 50)
	{
		printf("%ld, ", b);
		c = a + b;
		a = b;
		b = c;
		++i;
	}

	printf("%ld\n", c);

	return (0);
}
