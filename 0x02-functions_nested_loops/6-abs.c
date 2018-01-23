#include "holberton.h"

/**
 * _abs - returns the absolute value of a number
 * @i: integer to check to return absolute value
 *
 * Return: absolute value of a number
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (-i);
	}
}
