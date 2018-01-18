#include <stdio.h>

/**
 * main - prints out the sizes of multiples variables
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(ll));
	printf("Size of a float: %d byte(s)\n", sizeof(f));

	return (0);
}