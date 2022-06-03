 /*
 *  4-print_alphabt.c
 *  A program that prints lower case letters from a-z
 *  Except letters 'q' and 'e'
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
		if (myChar == 'E' || myChar == 'Q')
		{
			continue;
		}
		putchar(tolower(myChar));
	}
	putchar('\n');
	return (0);
}
