#include "putchar.h"
/**
 * main - prints _putchar followed by a new line.
 * Return: 0 on success.
 */
int main(void)
int _putchar(char _putchar)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
