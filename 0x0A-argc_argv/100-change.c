#include "main.h"
#include <unistd.h>

void putnumbr(long);
/**
 * main - that a program prints the minimun nums of coins ton
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int j;
	long num;
	int count_coin;

	count_coin = 0;
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (argc <= 2)
	{
		j = 0;
		num = 0;
		while (argv[1][j] != '\0')
		{
			num = num * 10 + (argv[1][j] - '0');
			j++;
		}
		if (num < 0)
		{
			write(1, "0\n", 2);
			return (0);
		}
		while (num > 0)
		{
			if (num >= 25)
			{
				num -= 25;
			}
			else if (num >= 10)
                        {
                                num -= 10;
                        }
			else if (num >= 5)
                        {
                                num -= 5;
                        }
			else if (num >= 2)
                        {
                                num -= 2;
                        }
			else
			{
				num -= 1;
			}
			count_coin++;
		}
	}
	putnumbr(count_coin);
	_putchar('\n');
	return (0);
}
/**
 *
 *
 *
 */
void putnumbr(long n)
{
	if (n < 0)
	{
		write (1, "-", 1);
		n -= n;
	}
	if (n > 9)
	{
		putnumbr(n / 10);
	}
	_putchar(n % 10 + '0');
}
