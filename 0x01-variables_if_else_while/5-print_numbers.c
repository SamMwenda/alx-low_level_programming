/*
 *  5-print_numbers.c
 *  A program that prints all numberd from 0 to 9
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
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
