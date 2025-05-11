#include "main.h"

/**
 * _sqrt_recursion - Its a function that return the natural square root of num
 * @n: Its a natural square to be printed.
 * Return: the function by a number n to find square root and x the current.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}

 /**
 * _sqrt_helper - Its a func find the square root recursively
 *
 * @n: Its number to find the square root.
 * @x: The current guess for the square root.
 * Return: The square root, or -(1) if no natural number square root exist
 */
int _sqrt_helper(int n, int x)
{
	if (x * x == n)
	{
		return (x); /* Base case: found the square root */
	}
	if (x * x > n)
	{
		return (-1); /* Base case: no square root exists so return -1 */
	}
	return (_sqrt_helper(n, x + 1));
}
