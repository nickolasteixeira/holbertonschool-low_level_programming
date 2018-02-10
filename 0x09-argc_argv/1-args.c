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
	(void)*argv;

	printf("%d\n", argc - 1);
	return (0);
}
