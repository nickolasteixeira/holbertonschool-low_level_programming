#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_change - counts the amount of coins needed to
 * give you in exchange for the amount you pass
 * @amount: amount you need change
 *
 * Return: amount of coins
 */
int get_change(int amount)
{
	unsigned int change, count_type;
	int types[] = {25, 10, 5, 2, 1};

	count_type = 0;
	change = 0;

	while (amount > 0)
	{
		if (amount >= types[count_type])
		{
			amount -= types[count_type];
			++change;
		}
		else if (amount < types[count_type])
		{
			++count_type;
		}
	}
	return (change);
}
/**
 * main - prints the amount of coins you get in exchange based on the
 * argv[1] value you pass in, has to be greater than 0
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	unsigned int change, amount;

	change = 0;
	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argv[1] < 0)
	{
		printf("%d\n", change);
		return (0);
	}

	amount = atoi(argv[1]);
	change = get_change(amount);

	printf("%d\n", change);
	return (0);
}
