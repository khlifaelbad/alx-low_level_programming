#include "main.h"
#include <unistd.h>

/**
 * _sqrt_helper - recursive helper to find the natural square root
 *
 * @n: its a number to find the square root of.
 * @i: current number being tested as a possible square root.
 *
 * Return: returns the natural square root of a num if found,
 * -1 if no natural square root exists.
 */
int	_sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i >  n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: number to calculate the square root of.
 *
 * Return: the natural square root of n,
 * -1 if n does not have a natural square.
 */
int	_sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
