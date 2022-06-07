#include "main.h"

/**
 * print_sign - checks if a number is
 * negative
 * positive
 * zero
 * @n: The number to check
 * Return: 0 if zero if negative 1 positive -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
