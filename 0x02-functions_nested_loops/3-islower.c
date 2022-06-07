#include "main.h"

/**
 * _islower - checks if a character islower case
 * Return: 1 if lowercase 0 otherwise
 */
int _islower(char c)
{
	if (c < 97 || c > 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
