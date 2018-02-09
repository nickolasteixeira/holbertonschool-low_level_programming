#include "holberton.h"
#include <stdio.h>
/**
 * main - prints the number of arguments pass into the function
 * @argc: argument count
 * @argv: argument vector array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	unsigned int i, counter;
	(void)*argv;

	i = 1;
	counter = 0;
	while (i < argc)
	{
		++counter;
		++i;
	}
	printf("%d\n", counter);
	return (0);
}
