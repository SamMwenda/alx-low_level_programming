/*
 *  101-quote.c
 *  A program that prints piece of art is useful\" - Dora Korpar, 2015-10-19
 */
#include <unistd.h>

/**
 * main - My entry point for my program
 *
 * Return: returns 0
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
