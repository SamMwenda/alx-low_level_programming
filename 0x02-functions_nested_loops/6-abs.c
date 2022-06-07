#include "main.h"

/**
 * int_abs - print absolute value of a number
 * @a: number to return absolute value
 * Return: the absolute value of a number
 */
int int_abs(int a)
{
	if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (a);
	}
}
