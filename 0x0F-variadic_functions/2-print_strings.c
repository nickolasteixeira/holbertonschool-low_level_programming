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

	if (separator == NULL)
		return;

	va_start(words, n);

	i = 0;
	while (i < (n - 1))
	{
		/*
		if ((va_arg(words, char *) == NULL) && (i == (n - 1)))
			printf("(nil)\n");
		else if (va_arg(words, char *) == NULL)
			printf("(nil) ");
		else if (i == (n - 1))
			printf("%s\n", va_arg(words, char *));
		else
			printf("%s%c ", va_arg(words, char *), *separator);
		*/
		printf("%s%c ", va_arg(words, char *), *separator);
		++i;
	}
	printf("%s\n", va_arg(words, char *));

	va_end(words);

}
