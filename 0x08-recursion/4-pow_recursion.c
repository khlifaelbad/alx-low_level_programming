#include <unistd.h>
#include "main.h"

/**
 * _pow_recursion - that a func given a power of number.
 *
 * @x: its a value to be power.
 * @y: its a power of value x.
 *
 * Return: returns the value of x raised to power of y.
 */
int	_pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
