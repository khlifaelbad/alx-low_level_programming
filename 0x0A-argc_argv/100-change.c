#include "main.h"
#include <unistd.h>

void putnumbr(long);
/**
 * main - a program prints the mini num of coins to make change amount money
 *
 * Description: Usage: ./change cents
 * where cents is the amount of cents you need to give back
 * if the number of arguments passed to your program is not exactly 1,
 * print Error, followed by a new line, and return 1
 * you should use atoi to parse the parameter passed to your program
 * If the number passed as the argument is negative, print 0, followed by nl
 * You can use an unlimited num of coins of values 25, 10, 5, 2, and 1 cent
 *
 * @argc: its counts arguments lines start by first argument of program
 * @argv: its array of arguments cmd line as strings
 *
 * Return: Always 0 (On success), 1 on error.
 */
int main(int argc, char *argv[])
{
	int j;
	long num;
	int count_coin;

	count_coin = 0;
	if (argc <= 1)
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
				num -= 25;
			else if (num >= 10)
				num -= 10;
			else if (num >= 5)
				num -= 5;
			else if (num >= 2)
				num -= 2;
			else
				num -= 1;
			count_coin++;
		}
	}
	putnumbr(count_coin);
	_putchar('\n');
	return (0);
}
/**
 * putnumbr - prints a long integer using recursion and _putchar.
 *
 * @n: number to be printed
 *
 * Return: Nothing to return.
 */
void putnumbr(long n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n -= n;
	}
	if (n > 9)
	{
		putnumbr(n / 10);
	}
	_putchar(n % 10 + '0');
}
