#include "holberton.h"

/**
 * _puts - prints the values of the array of characters memory address
 * @str: string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
