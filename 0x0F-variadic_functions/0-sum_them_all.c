#include "variadic_functions.h"
/**
 * sum_them_all - variadic function that sums all the parameters
 * being passed to the function
 * @n: number of arguments being passed to the function
 *
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum_list;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(sum_list, n);

	sum = 0;
	i = 0;
	while (i < n)
	{
		sum += va_arg(sum_list, int);
		++i;
	}
	va_end(sum_list);
	return (sum);
}
