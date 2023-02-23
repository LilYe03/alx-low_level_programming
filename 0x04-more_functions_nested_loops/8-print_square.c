#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square in row/col units
 *
 * Return: 0
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)

	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
		}
	}
	else
		_putchar('\n');
}
