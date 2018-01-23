#include <stdio.h>

/**
 * print_to_98 - prints @min to the number 98 to the output 
 * @min: number to start incrementing to 98
 *
 * Return: void
 */


void print_under_98(int x)
{
	int i;

	for (i = x; i <= 98; ++i)
	{
		if (i != 98)
			printf("%d, ", i);
		else 
			printf("%d\n", i);
	}
}

void print_over_98(int x)
{
	int i;

	for (i = x; i >= 98; --i)
	{
		if (i != 98)
			printf("%d, ", i);
		else
			printf("%d\n", i);
	}
}

void print_to_98(int min)
{
	int i;

	if (min <= 98)
	{	
		print_under_98(min);
	} 
	else
	{
		print_over_98(min);
	}
}
