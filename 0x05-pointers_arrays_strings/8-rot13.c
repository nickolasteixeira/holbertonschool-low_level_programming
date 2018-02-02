#include "holberton.h"
/**
 * rot13 - rotates characters 13 positions in the ASCII T
 * @s: the first position in the pointer
 *
 * Return: pointer to the string you passed
 */
char *rot13(char *s)
{
	unsigned int i = 0;
	unsigned int j;
	char characters[52] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

	char rotate13[52] = {'n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M'};

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 52)
		{
			if (s[i] == characters[j])
			{
				s[i] = rotate13[j];			
				break;
			}
			++j;
		}
		++i;	
	}
	return (s);
}
