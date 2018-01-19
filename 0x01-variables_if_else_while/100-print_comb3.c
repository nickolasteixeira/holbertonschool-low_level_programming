#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0;
 */

int main(void)
{
	int i, k;

	for (i = '0'; i <= '9'; ++i)
	{
		for (k = '1'; k <= '9'; ++k)
		{
			if (k != i && k > i)
			{
				putchar(i);
				putchar(k);

				if (i == '8' && k == '9')
				{	
					break;
				}

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
