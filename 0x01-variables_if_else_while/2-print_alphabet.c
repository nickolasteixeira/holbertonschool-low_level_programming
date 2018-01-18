#include <stdio.h>

/**
 * main - print all the letters of the alphabet without spaces
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; ++i)
		printf("%c", i);

	printf("\n");

	return (0);
}
