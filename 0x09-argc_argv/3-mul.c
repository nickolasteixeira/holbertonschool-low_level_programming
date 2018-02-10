#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * check_arguments - checks if the string is a number or not
 * @arg_v: string to check
 *
 * Return: 1 if it is, 0 if it isn't
 */
int check_arguments(char *arg_v)
{
	unsigned int i = 0;

	while (arg_v[i] != '\0')
	{
		if (arg_v[i] == '-')
			++i;

		if (!(arg_v[i] >= '0' && arg_v[i] <= '9'))
		{
			return (1);
		}
		++i;
	}
	return (0);
}

/**
 * main - multiples all numbers in argv and prints to output
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	if (check_arguments(argv[1]) || check_arguments(argv[2]))
	{
		printf("Erorr\n");
		return (1);
	}

	product = 0;
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);
}
