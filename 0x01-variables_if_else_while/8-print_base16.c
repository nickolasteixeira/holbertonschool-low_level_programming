#include <stdio.h>

/** 
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 0; i < 16; ++i)
		putchar(i);	

	putchar('\n');

	return (0);
}
