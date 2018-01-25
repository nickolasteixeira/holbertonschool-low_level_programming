/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of diagonals you want to draw
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	i = 1;

	while (i <= n)
	{
		j = 1;

		while (j <= i)
		{
			if (i != j)
				_putchar('.');
			else
			{
				_putchar('\\');
				_putchar('\n');
			}
			++j;
		}
		++i;
	}
}
