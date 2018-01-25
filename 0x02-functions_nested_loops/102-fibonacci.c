#include <stdio.h>

/**
 * main - prints first 50 Fibonacci number
 *
 * Return: 0;
 */

int main(void)
{
	long int i = 1, a = 0, b = 1, c = 1;

	while (i <= 50)
	{
		printf("%ld\n", c);
		c = a + b;
		a = b;
		b = c;
		++i;
	}

	return (0);
}
