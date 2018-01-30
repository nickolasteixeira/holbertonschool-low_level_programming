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

	for (i = 0; *str != '\0'; ++i)
	{
		/* printf("%d\n", i); */
		/* _putchar(*str); */
		putchar(*str);
		str++;
	}

	putchar('\n');
}
