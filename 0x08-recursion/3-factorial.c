#include <unistd.h>
#include "main.h"

/**
 * factorial - its a func that given factorial of number.
 *
 * @n: its a num to be factorial.
 *
 * Return: return factorial of number n.
 */
int	factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
