#include "main.h"
#include <stdio.h>
/**
 * main -  a program that prints its name
 *
 * @argc: its counts of command line arguments
 * @argv: its an array of command line arguments
 *
 * Return: Always 0.
 */
int	main(int argc, char *argv[])
{
	/*char *ptr;*/

	/*ptr = argv[0];*/
	/*(void) argc;*/
	/*while (*ptr)*/
		/*_putchar(*ptr++);*/
	/*_putchar('\n');*/
	int	i;

	i = 0;
	(void) argc;
	while (argv[0][i] != '\0')
		_putchar(argv[0][i++]);
	_putchar('\n');
	return (0);
}
