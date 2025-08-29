#include <unistd.h>
#include "main.h"

/**
 * _strlen_recursion - that a func count length of str.
 *
 * @s: its a string to be counted.
 *
 * Return: return a length of string.
 */
int	_strlen_recursion(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '\0')
		return (0);
	return  (1 + _strlen_recursion(&s[i] + 1));
}
