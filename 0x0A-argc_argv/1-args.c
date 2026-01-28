#include "main.h"
/*#include <stdio.h>*/
/**
 * print_nums - that a func prints all digits
 * @num: its a number to be printed
 */

void print_nums(int num);
void print_nums(int num)
{
	if (num > 9)
		print_nums(num / 10);
	_putchar((num % 10) + '0');
}
/**
 * main - a program that prints number arguments
 *
 * @argc: its counts numbers of arguments
 * @argv: its an array of command line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	/*printf("%d\n", argc -1);*/
	/*putchar((argc - 1) + '0');*/
	print_nums(argc - 1);
	_putchar('\n');
	return (0);
}
