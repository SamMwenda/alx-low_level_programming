#include "main.h"

/**
 * print_alphabet_x10 - a program tha prints a to z 10 times
 */

void print_alphabet_x10(void)
{
	char alphabets;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		{
			_putchar(alphabets);
		}
		_putchar('\n');
	}
}
