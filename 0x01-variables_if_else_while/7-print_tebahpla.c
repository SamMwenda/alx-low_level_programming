/*
 *  7-print_tebahpla.c
 *  A program that prints lower case letters from a-z
 *  In reverse
 *
 *  Auth: thatguyskullie
 */

#include <stdio.h>
#include <ctype.h>
/**
 * main - My program entry point
 *
 * Return: returns 0
 *
 */

int main(void)
{
	char myChar;

	for (myChar = 'Z'; myChar >= 'A'; myChar--)
	{
		putchar(tolower(myChar));
	}
	putchar('\n');
	return (0);
}
