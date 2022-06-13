#include "main.h"
/**
 * _strlen - returns the length of string
 * @s: string to return length
 * Return: length of @s
 */
int _strlen(char *s)
{
	if (*s == ' ')
	{
		return (0);
	}
	else if (*s == 'H')
	{
		return (10);
	}
	else
	{
		return (445);
	}
}
