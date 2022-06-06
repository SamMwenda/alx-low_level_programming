/*
 * 6-size.c
 * A program that prints size of various types
 */
#include <stdio.h>
/**
 * main - My entry point for my program
 * sizeof - evaluates the size of a variable
 * Return: returns 0
 */
int main(void)
{
	char charType;
	int  intType;
	long int longIntType;
	long long int longLongIntType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongIntType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
