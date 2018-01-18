#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers with commas
 *
 * Description: Use the ASCII table for number reference
 *
 * Return: 0
 */

int main(void)
{
	int i = '0';
	/* 48 to 56 */
	while (i <= '9')
	{
		putchar(i);
		if (i < '9')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}

	putchar('\n');

	return (0);
}
