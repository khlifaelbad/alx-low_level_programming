#include <unistd.h>

/**
 * _putchar - that a function print every character
 * @c: its a character to be printed.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
