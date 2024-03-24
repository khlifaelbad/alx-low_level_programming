#include "main.h"

/**
 * print_square - a func that prints a square, followed by a new line.
 * @size: it is time of square to be printed.
 * Return: Always with 0.
 */

void print_square(int size)
{
	int colmun, rows;

	if (size > 0)
	{
		for (colmun = 0; colmun < size; colmun++)
		{
			for (rows = 0; rows < size; rows++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
