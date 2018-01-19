#include <stdio.h>

/**
 * main - prints all possible combinations of three digits
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; ++i)
	{
		for (j = '0'; j <= '9'; ++j)
		{
			for (k = '0'; k <= '9'; ++k)
			{
				if (j > i && k > j)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == '7' && j == '8' && k == '9')
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
