#include <unistd.h>
#include <stdio.h>
//#include "main.h"

int _putchar(char c)
{
    return (write(1, &c, 1));
}

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b || b > c)
    {
        largest = a;
    }
    else if (b > a || a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}

int main(void)
{
    int a, b, c;
    int largest;

    a = 3;
    b = 2;
    c = 0;

    largest = largest_number(a, b, c);

    printf("%d is the largest number\n", largest);

    return (0);
}