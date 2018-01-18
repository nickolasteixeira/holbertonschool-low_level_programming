#include <stdio.h>

/**
 * main - print all the letters of the alphabet except q e without spaces
 *
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c == 'q')
		{
		}
		else if (c == 'e')
		{
		}
		else
		{
			putchar(c);
		}
	}

	putchar('\n');
	return (0);
}
