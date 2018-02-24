#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_c - prints a character
 * @list: list of arguments from va_list
 *
 * Return: void
 */
void print_c(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_i - prints a digit
 * @list: list of arguments from va_list
 *
 * Return: void
 */
void print_i(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_f - prints a float number
 * @list: list of arguments from va_list
 *
 * Return: void
 */
void print_f(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_s - prints a pointer character
 * @list: list of arguments from va_list
 *
 * Return: void
 */
void print_s(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
	{
		s = "(nil)";
	}

	printf("%s", s);
}
/**
 * print_all - prints all the arguments that are
 * part of the format variable
 * @format: character pointer to check the list against
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{

	va_list list;
	int i, j;
	char *ptr = "";
	char *ptr2 = ", ";

	all_list all_types[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(list, format);

	i = 0;
	while (format && format[i] != '\0')
	{
		j = 0;
		while (all_types[j].c != NULL)
		{

			if (format[i] == all_types[j].c[0])
			{
				printf("%s", ptr);
				all_types[j].f(list);
				ptr = ptr2;
			}
			++j;
		}
		++i;
	}
	printf("\n");

	va_end(list);
}
