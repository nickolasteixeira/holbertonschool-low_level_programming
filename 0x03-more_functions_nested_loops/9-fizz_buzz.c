#include <stdio.h>

/**
 * print_fizz_space - prints message with space
 * @i: integer to compare
 *
 * Return: void
 */
void print_fizz_space(int i)
{
	if (i % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz ");
	else if (i % 3 == 0)
		printf("Fizz ");
	else if (i % 5 == 0)
		printf("Buzz ");
	else
		printf("%d ", i);
}

/**
 * print_fizz_nospace - prints message with no space
 * @i: integer to compare
 *
 * Return: void
 */
void print_fizz_nospace(int i)
{
	if (i % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz");
	else if (i % 3 == 0)
		printf("Fizz");
	else if (i % 5 == 0)
		printf("Buzz");
	else
		printf("%d", i);
}

/**
 * main - prints fizz, buzz, or fizzbuzz
 *
 *
 * Return: 0;
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i != 100)
			print_fizz_space(i);
		else
			print_fizz_nospace(i);
		++i;
	}

	printf("\n");

	return (0);
}
