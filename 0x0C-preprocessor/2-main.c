#include <stdio.h>
/**
 * main - prints the string literal name
 * of the file that is being executed
 *
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
