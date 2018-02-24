#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct dtypes - description of dtypes
 * @c: character pointer
 * @f: function pointer
 */
typedef struct dtypes
{
	char *c;
	void (*f)();
} all_list;

void print_c(va_list list);
void print_i(va_list list);
void print_f(va_list list);
void print_s(va_list list);
#endif /* _VARIADIC_FUNCTIONS_H_ */
