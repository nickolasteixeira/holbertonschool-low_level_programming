/**
 * _isalpha - checks for alphabetic character
 * @c: the integer to compare
 *
 * Description: Returns 1 if c is a letter, lowercase or uppercase
 * Return: 1
 */

int _isalpha(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; ++i)
	{
		if (c == i)
		{
			return (1);
		}
	}

	for (i = 'A'; i <= 'Z'; ++i)
	{
		if (c == i)
		{
			return (1);
		}
	}

	return (0);
}
