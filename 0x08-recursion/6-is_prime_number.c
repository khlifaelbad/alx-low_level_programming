#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * helper_prime - recursive helper to check if number is prime.
 *
 * @n: number to check
 * @i: current divisor being tested.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int	helper_prime(int n, int	i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (helper_prime(n, i + 1));
}
/**
 * is_prime_number - that a func check prime number and not prime.
 *
 * @n: it is input integer is prime number and not.
 *
 * Return: return 1 if prime and return 0 if not prime num.
 */
int	is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (helper_prime(n, 2));
}
