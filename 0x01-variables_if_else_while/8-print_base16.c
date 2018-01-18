#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i < 57; ++i)
		putchar(i);

	for (i = 97; i < 103; ++i)
		putchar(i);

	putchar('\n');

	return (0);
}
