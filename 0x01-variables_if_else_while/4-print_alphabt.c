#include <stdio.h>

/**
 * main - print all the letters of the alphabet except q e without spaces
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 97; i < 101; ++i)
		printf("%c", i);

	for (i = 102; i < 113; ++i)
		printf("%c", i);

	for (i = 114; i < 122; ++i)
		printf("%c", i);

	printf("\n");

	return (0);
}
