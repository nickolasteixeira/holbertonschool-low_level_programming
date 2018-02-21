#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints the name of a person
 * using the void f callback function
 * @name: name of person
 * @f: call back function that prints name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
