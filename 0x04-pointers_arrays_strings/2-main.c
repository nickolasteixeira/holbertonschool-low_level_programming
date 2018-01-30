#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  char *str;
  char *str1;
  int len, len1;

  str = "Holberton!";
  str1 = "Nick";
  len = _strlen(str);
  len1 = _strlen(str1);
  printf("%d\n%d\n", len, len1);
  return (0);
}
