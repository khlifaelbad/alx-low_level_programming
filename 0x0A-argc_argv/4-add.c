#include "main.h"
#include <unistd.h>

void putnum(long n);
/**
 * main - that a func prints result addition numbers.
 *
 * Description: If no number is passed to the program, print 0
 * by new line
 * If one of the number contains symbols that are not digits, print Error
 * followed by a new line, and return 1
 * You can assume that nums and the add of all the nums can be stored in int
 * @argc: its counts arguments command line
 * @argv: its array of arguments
 *
 * Return: Always 0 on (sucess), 1 on error.
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	long num;
	long res;
	int sign;

	i = 1;
	res = 0;
	if (argc  <= 1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	while (argc > i)
	{
		j = 0;
		num = 0;
		sign = 1;
		if (argv[i][j] == '-')
		{
			sign = -1;
			j++;
		}
		if (argv[i][j] == '\0')
		{
			write(2, "Error\n", 6);
			return (1);
		}
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				write(2, "Error\n", 6);
				return (1);
			}
			num = num * 10 + (argv[i][j] - '0');
			j++;
		}
		res =  res + (num * sign);
		i++;
	}
	putnum(res);
	_putchar('\n');
	return  (0);
}
/**
 * putnum - a func prints numbers digits
 *
 * Description: print numbers by use recursive
 * and _putchar
 *
 * @n: its a number to be printed.
 *
 * Return: Nothing to be return.
 */
void putnum(long n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		putnum(n / 10);
	}
	_putchar(n % 10 + '0');
}
