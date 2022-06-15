#include "main.h"
#include <stdio.h>
void reverse_array(int *a, int n)
{
	int i;
	
	i = n;
	while (i >= 0 )
	{
		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar(a[i]);
		i--;
	}
	printf("\n");
}
