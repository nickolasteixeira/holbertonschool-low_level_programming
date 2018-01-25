/**
 * print_numbers - prints the numbers from 0 - 9, then '\n'
 *
 *
 * Return
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		++i;
	}
	_putchar('\n');
}
