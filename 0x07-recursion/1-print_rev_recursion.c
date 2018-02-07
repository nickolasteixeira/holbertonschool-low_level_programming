#include "holberton.h"
/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: string to reverse and print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	/* terminating condition */
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);

}
