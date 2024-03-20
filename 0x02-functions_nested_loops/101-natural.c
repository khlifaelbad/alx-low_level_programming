#include <stdio.h>
#include "main.h"

/**
 * main - list all the natural numbers below 10 that are multiples of 3 or 5
 *  we get 3, 5, 6 and 9. The sum of these multiples is 23
 *  and prints the sum of all the multiples of 3 or 5 below 1024.
 * Return: Always with 0 (Success).
 */

int main(void)
{
	int number;
	int sum = 0;

	for (number = 0; number < 1024; number++)
	{
		if ((number % 3 == 0) || (number % 5 == 0))
			sum += number;
	}
	printf("%d\n", sum);
	return (0);
}
