#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concats all the agruments of your program into a
 * new memory addres
 * @ac: argument count
 * @av: argument vector
 *
 * Return: new pointer with all the strings from the av
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k, length;

	i = 0;
	length = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			++length;
			++j;
		}
		++length;
		++i;
	}

	s = malloc((length + 1) * sizeof(char));
	/* NULL malloc edge case */
	if (s == NULL)
		return (NULL);

	/* edge case 2 */
	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			s[k] = av[i][j];
			++k;
			++j;
		}
		s[k] = '\n';
		++k;
		++i;
	}
	s[k] = '\0';

	return (s);
}
