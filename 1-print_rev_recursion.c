#include <unistd.h>
#include "main.h"

/**
 * _print_rev_recursion - that a func rev string.
 *
 * @s: its a string to be reversed.
 *
 * return: Nothing to be returned.
 */
void	_print_rev_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
		return;
	/* first charac to '\0' there were stop will print */
	_print_rev_recursion(s + 1);
	/* first char ti last then go backtracking printed as forwardback*/
	write(1, s, 1);
}
