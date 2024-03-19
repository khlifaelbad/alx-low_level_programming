#include "main.h"

/**
 * print_times_table -  a func that prints the n times table
 * starting with 0.
 * @n: that print value of time table.
 */

void print_times_table(int n)
{
	int rows, colmun, mult;

	if (n <= 15 && n >= 0)
	{
		for (colmun = 0 ; colmun <= n; colmun++)
		{
			_putchar('0');
			for (rows = 1; rows <= n; rows++)
			{
				mult = rows * colmun;
				_putchar(',');
				_putchar(' ');
				if (mult <= 9)
					_putchar(' ');
				if (mult <= 99)
					_putchar(' ');
				if (mult >= 100)
				{
					_putchar((mult / 100) + '0');
					_putchar((mult / 10) % 10 + '0');
				}
				else if (mult >= 10 && mult <= 99)
				{
					_putchar((mult / 10) + '0');
				}
				_putchar((mult % 10) + '0');
			}
		_putchar('\n');
		}
	}
}
