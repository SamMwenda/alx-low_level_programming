/*
 *  8-print_base16.c
 *  A program that prints base 16 numbers in lower case
 *  i.e 0123456789abcdef
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
	char myChar;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	for (myChar = 'a'; myChar <= 'f'; myChar++)
	{
		putchar(myChar);
	}
	putchar('\n');
	return (0);
}
