#include "main.h"

/**
 * _puts_recursion - its a function that prints a string.
 *
 * @s: its a char to be printed
 * Return: nothing to return.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}
