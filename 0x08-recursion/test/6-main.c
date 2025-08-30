#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int	main()
{
	int	r;

	r = is_prime_number(1);
	printf("%d\n", r);

	r = is_prime_number(1024);
        printf("%d\n", r);

	r = is_prime_number(16);
        printf("%d\n", r);

	r = is_prime_number(17);
        printf("%d\n", r);

	r = is_prime_number(25);
        printf("%d\n", r);

	r = is_prime_number(-1);
        printf("%d\n", r);

	r = is_prime_number(113);
        printf("%d\n", r);

	r = is_prime_number(7919);
        printf("%d\n", r);
	return (0);
}
