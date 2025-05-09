#include "main.h"

/**
 * factorial - Its a func that returns the factorial of a given number.
 *
 * @n: Its a represent a number of factorial.
 *
 * Return: the number factorial of num.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /* error: negative nums don't have factorials */
	}
	if (n == 0)
	{
		return (1); /* Base case: factorial 0 is 1 */
	}
	return (n * factorial(n - 1)); /* recursive step by calculate factorial */
}
