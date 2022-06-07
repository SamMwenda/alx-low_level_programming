#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @a: number to print last digit of
 * Return: thlast digit of a
 */
int print_last_digit(int a)
{
	_putchar('0' + a);
	return (a % 10);
}
