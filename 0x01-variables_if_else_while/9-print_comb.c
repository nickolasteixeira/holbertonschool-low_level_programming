#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers with commas
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
	{
		putchar(i % 10 + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
