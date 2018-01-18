#include <stdio.h>

/**
 * main - prints numbers 0 - 9 in one line
 *
 * Return: 0
 */

int main(void)
{
	int i;

	while (i < 10)
	{
		printf("%d", i);
		++i;
	}

	printf("\n");
	return (0);
}
