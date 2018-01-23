/**
 * _islower - checks for lowercase characteres
 * @c: letter of alphabet
 *
 * Return: int;
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
