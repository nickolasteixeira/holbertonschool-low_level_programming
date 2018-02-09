#include "holberton.h"
#include <stdio.h>
/**
 * check_arguments - checks if the string is a number or not
 * @arg_v: string to check
 *
 * Return: 1 if it is, 0 if it isn't
 */
int check_arguments(char *arg_v)
{
	while (*arg_v != '\0')
	{
		if (!(*arg_v >= '0' && *arg_v <= '9'))
		{
			printf("Error\n");
			return (0);
		}
		*(++arg_v);
	}
	return (1);
}


/**
 * main - adds all arguments that are numbers and prints sum
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if all are numbers, 1 if not a number
 */
int main(int argc, char *argv[])
{
	unsigned int i;
	int sum;

	i = 1;
	sum = 0;
	while (i < argc)
	{
		if (check_arguments(argv[i]))
		{
			sum += atoi(argv[i]);
			++i;
		}
		else
		{
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
