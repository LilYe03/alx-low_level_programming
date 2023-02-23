#include <stdio.h>
#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 *
 * Return: void
 */

void print_number(int n)
{

	unsigned int k = n;

	if (n < 0)
	{
		_putchar('_');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}
