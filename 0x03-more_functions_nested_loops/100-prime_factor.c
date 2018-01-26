#include <stdio.h>

/**
 * main - prints the highest prime factorization of an
 * assigned number
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long int number;

	number = 612852475143;
	i = 2;

	while (i < number)
	{
		if (number % i == 0)
			number = number / i;
		else
			if (!(number % i == 0))
				++i;
	}

	printf("%ld\n", number);

	return (0);
}
