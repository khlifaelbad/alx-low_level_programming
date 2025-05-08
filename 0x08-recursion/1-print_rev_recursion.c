#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 *
 * @s: its a string to be printed in reverse
 * Return: nothing to return.
 */
void _print_rev_recursion(char *s)
{
	/* base case for check end of string */
	if (*s == '\0')
	{
		return; /* back to stack reversely*/
	}
	/* call and recall the function recursive go forward */
	_print_rev_recursion(s + 1);
	/* print in reverse (after calls return) */
	_putchar(*s);
}

