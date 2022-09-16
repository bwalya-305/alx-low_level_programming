#include <stdio.h>
#include "main.h"

/**
 * print_number - Prints a number
 * @n: The number to print
 */

void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		x = -n;
		_putchar('_');
	}
	else
	{
		x = n;
	}
	
	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar((x % 1)0 + '0');
}
