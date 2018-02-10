#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiples all numbers in argv and prints to output
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	unsigned int i;
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = 1;
	product = 1;
	while (i < argc)
	{
		product *= atoi(argv[i]);
		++i;
	}
	printf("%d\n", product);
	return (0);
}
