#include "holberton.h"
#include <stdio.h>
/**
 * main - prints all the arguments it receives, with \n
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	unsigned int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		++i;
	}

	return (0);
}
