#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @a: number to print last digit of
 * Return: thlast digit of a
 */
int print_last_digit(int a)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == a)
		{
			_putchar(i);
			break;
		}
		else
		{
			continue;
		}
	}
	return (a % 10);
}
