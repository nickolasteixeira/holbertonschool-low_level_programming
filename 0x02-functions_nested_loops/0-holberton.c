#include "holberton.h"

/**
 * main - prints "Holberton" using the holberton.h standard library
 *
 * Return: 0;
 */

int main(void)
{
	char string[10] = "Holberton";
	int i;

	for (i = 0; i < 10; ++i)
		_putchar(string[i]);

	_putchar('\n');

	return (0);
}
