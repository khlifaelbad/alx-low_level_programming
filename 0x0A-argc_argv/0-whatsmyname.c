#include "main.h"

/**
 * main -  a program that prints its name
 *
 * @argc: its counts of command line arguments
 * @argv: its an array of command line arguments
 *
 * Return: Always 0.
 */

int	main(int argc __attribute__((unused)), char *argv[])
{
	/*char *ptr;*/

	/*ptr = argv[0];*/
	/*(void) argc;*/
	/*while (*ptr)*/
		/*_putchar(*ptr++);*/
	/*_putchar('\n');*/
	print_str(argv[0]);
	_putchar('\n');
	return (0);
}

/**
 * print_str - that a func a print string.
 *
 * @str: its a string to be printed.
 *
 * Return: nothing to return.
 */
void print_str(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
