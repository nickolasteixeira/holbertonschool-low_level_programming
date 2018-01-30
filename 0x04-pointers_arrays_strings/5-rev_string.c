#include "holberton.h"
/**
 * _strlen - returns the length of the string -1
 * @s: the string to get the length
 *
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int counter = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		++counter;
		++i;
	}
	--counter;
	return (counter);
}

/**
 * rev_string - prints a string in reverse order
 * @s: the string to count down from
 *
 * Description: Reverses the string in memory
 * Return: void
 */
void rev_string(char *s)
{

	int i, j;
	int length = _strlen(s);
	char place_holder;

	j = length;
	i = 0;
	while (j >= i)
	{
		place_holder = s[i];
		s[i] = s[j];
		s[j] = place_holder;
		--j;
		++i;
	}
}
