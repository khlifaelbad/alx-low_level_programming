#include "main.h"
/*#include <stdio.h>*/
#include <unistd.h>

void    putnumber(long n);
/**
 * main - that a program print result of mult by a new line
 *
 * @argc: its counts arguments
 * @argv: array of arguments
 *
 * Description: This program converts each argument to an integer,
 *
 * Return: 0 on success, 1 if no arguments are provided
 */
int main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	num;
	int	res;
	int	sign;

	i = 1;
	res = 1;
	if (argc == 1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	while (argc > i)
	{
		num = 0;
		j = 0;
		sign = 1;
		if (argv[i][j] == '-')
		{
			sign = -1;
			j++;
		}
		while (argv[i][j] != '\0')
		{
			num = num * 10 + (argv[i][j] - '0');
			j++;
		}
		res *= (num * sign);
		i++;
	}
	/*printf("%d\n", res);*/
	putnumber(res);
	_putchar('\n');
	return (0);
}
/**
 * putnumber - that a func print an integer using _putchar
 *
 * @n: its a number to be printed
 *
 * Description: This func prints any integer (positive or negative)
 * digit by digit using recursion and _putchar.
 * Return: Nothing to return
 */
void	putnumber(long  n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		putnumber(n / 10);
	_putchar((n % 10) + '0');
}
