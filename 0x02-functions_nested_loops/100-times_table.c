#include "main.h"

/**
 * print_times_table - a func that prints n time table 
 * and starting with 0.
 * @n: parameter of func print_times_table.
 * Return: return without value.
 */

void print_times_table(int n)
{
	int row, colmun, prod;

	if (n <= 15 && n >= 0)
	{
		for (colmun = 0; colmun <= n; colmun++)
		{
			_putchar('0');
			for (row = 1; row <= n; row++)
			{
				_putchar(','); 
				_putchar(' ');
				prod = row * colmun;
				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 100) % 10 + '0');
				}
				else if ( prod <= 99 && prod >= 10)
					_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
		_putchar('\n');
		}
	}
}
