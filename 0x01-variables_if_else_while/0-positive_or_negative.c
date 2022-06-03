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
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}

