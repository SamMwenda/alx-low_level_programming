/*
 * 0-positive_or_negative.c
 *
 * A program that generate a random number
 * And checks whether the number is positive or negative.
 *
 * Auth: thatguyskullie
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The entry point of the program
 *
 * Return: returns 0
 *
 */
void positive_or_negative(int n)
{
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

}

