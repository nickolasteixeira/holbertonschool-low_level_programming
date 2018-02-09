#include "holberton.h"
#include <stdio.h>
/**
 * main - prints the file name if argc = 1
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[argc - 1]);
	}
	return (0);
}
