/*
 *  9-print_comb.c
 *  A program that prints compination od single digit numbers
 *
 *  Auth: thatguyskullie
 */

#include <stdio.h>

/**
 * main - My program entry point
 *
 * Return: returns 0
 *
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
