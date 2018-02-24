#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints a list of only string parameters via
 * a variadic function
 * @separator: the character used to separate each string parameter
 * @n: the number of parameters being passed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list words;
	unsigned int i;
	char *s;

	va_start(words, n);

	if (n == 0)
	{
		printf("\n");
		return;
	}

	i = 0;
	while (i < n)
	{
		s = va_arg(words, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i < (n - 1) && separator)
			printf("%s", separator);
		++i;
	}
	printf("\n");

	va_end(words);

}
