/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the '_' character to print
 *
 * Return: void;
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		++i;
	}

	_putchar('\n');
}
