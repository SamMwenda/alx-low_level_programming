/*
 *  2-print_alphabet.c
 *  A program that prints lower case letters from a-z
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

	for (myChar = 'A'; myChar <= 'Z'; myChar++)
	{
		putchar(tolower(myChar));
	}
	putchar('\n');
	return (0);
}
