#include <stdio.h>

/**
 * main - prints all combinations of two two-digit numbers.
 *
 * Return: 0
 */

int main(void)
{
	int i, k, m, n;

	for (i = 0; i < 9; ++i)
	{
		for (k = 0; k < 9; ++k)
		{
			m = 0;
		       	n = 0;

			while (m <= 9)
			{
				while (n <= 9)
				{
					putchar(i);
					putchar(k);
					putchar(' ');
					putchar(m);
					putchar(n);
					putchar(',');
					
					++n;
				}
				
				++m;
			}
		}
	}
}
