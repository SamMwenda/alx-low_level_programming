#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * print_number - Print any number one character at a time
 * Description: The program is to test the files of
 * 0x04-more_functions_nested_loops
 * Return: Always 0
 */
int main(void)
{
    /**
     * Tests 0-isupper.c
     * 
     * char c;
     *
     * c = 'A';
     * printf("%c: %d\n", c, _isupper(c));
     * c = 'a';
     * printf("%c: %d\n", c, _isupper(c));
     * return (0);
     */
    
    /**
     * Tests 1-isdigit.c
     * 
     * char c;
     * 
     * c = '0';
     * printf("%c: %d\n", c, _isdigit(c));
     * c = 'a';
     * printf("%c: %d\n", c, _isdigit(c));
     * return (0);
     */

    /**
     * Tests 2-mul.c
     * 
     * printf("%d\n", mul(98, 1024));
     * printf("%d\n", mul(-402, 4096));
     * return (0);
    */
    
    /**
     * Tests 3-print_numbers.c
     * 
     * print_numbers();
     * return (0);
     */
    /**
     * Tests 4-print_most_numbers.c
     * 
     * print_most_numbers();
     * return (0);
     */
    
     /* To be continued..... */

    /* Tests 5-more_numbers.c */
    /* Tests 6-print_line.c */
    /* Tests 7-print_diagonal.c */
    /* Tests 8-print_square.c */
    /* Already tested 9-fizz_buzz. */
    /* Tests 10-print_triangle.c */
    /* Tests 100-prime_factor.c */
    /* Tests 101-print_number.c */
}