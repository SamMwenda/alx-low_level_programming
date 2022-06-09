#include "main.h"

/**
 * print_square - prints a #
 * @n: times
 */
void print_square(int n)
{
	int i;
	int j;

	j = n;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n != 0)
		{
	for (i = 1; i <= j; i++)
	{
_putchar(35);
}
_putchar('\n');
n--;
}
}
}
