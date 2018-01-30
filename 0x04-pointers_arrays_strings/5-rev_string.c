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
	char place_holder[length + 1];

	i = length;
	j = 0;
	while (i >= 0)
	{
		place_holder[j] = s[i];
		--i;
		++j;
	}

	i = 0;
	while (i <= length)
	{
		s[i] = place_holder[i];
		++i;
	}
}

