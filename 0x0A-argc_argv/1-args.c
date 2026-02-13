#include "main.h"
#include <unistd.h>

void print_nums(long num);
/**
 * main - a program that prints number arguments
 *
 * @argc: its counts numbers of arguments
 * @argv: its an array of command line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void) *argv;
	print_nums(argc - 1);
	write(1, "\n", 1);
	return (0);
}
/**
 * print_nums - that a func prints all digits
 *
 * @num: its a number to be printed
 *
 * return: Nothing to return
 */
void print_nums(long num)
{
	if (num > 9)
	{
		print_nums(num / 10);
	}
	_putchar(num % 10 + '0');
}
