#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: string to check
 *
 * Return: unsigned int length of string
 */
unsigned int _strlen(char *s)
{
	unsigned int counter = 0;
	while (*s)
	{
		++counter;
		++s;
	}
	return (counter);
}
/**
 * string_nconcat - concats two strings together up to the parameter
 * n, to a new memory address, which we return
 * @s1: string 1 to copy
 * @s2: string 2 to copy
 * @n: number of digits to copy after s1
 *
 * Return: address of the newly created string pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, length1, length2, totalLength;

	/* edge case check for parameters */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* assigned lengths to parameters */
	length1 = _strlen(s1);
	length2 = _strlen(s2);
	totalLength = length1 + length2;

	/* conditions to allocation memory using malloc */
	if (n >= _strlen(s2))
		s = malloc(sizeof(char) * (totalLength + 1));
	else
		s = malloc(sizeof(char) * (length1 + n + 1));

	if (s == NULL)
		return (NULL);

	/* conditions to assign characters to memory addresses */
	if (n >= length2)
	{
		i = 0;
		while (i < length1)
		{
			s[i] = s1[i];
			++i;
		}
		j = 0;
		while (j < length2)
		{
			s[i] = s2[j];
			++i;
			++j;
		}
		s[i] = '\0';
	}
	else
	{
		i = 0;
		while (i < length1)
		{
			s[i] = s1[i];
			++i;
		}
		j = 0;
		while (j < n)
		{
			s[i] = s2[j];
			++i;
			++j;
		}
		s[i] = '\0';
	}

	return (s);

}
