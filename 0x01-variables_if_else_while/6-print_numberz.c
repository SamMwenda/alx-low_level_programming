/*
 *  6-print_numberz.c
 *  A program that prints all numbers from 0 to 9
 *  Using putchar
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
	}
	putchar('\n');
	return (0);
}
