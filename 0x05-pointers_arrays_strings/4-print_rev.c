#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s++)
		length++;
	for (i = length; i >= 0; i--)
		printf("%c", s[i]);
}
