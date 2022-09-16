#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 * Return: 0-9 followed by newline
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
