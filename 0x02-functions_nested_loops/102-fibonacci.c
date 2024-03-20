#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers and
 * starting with 1 and 2, followed by a new line.
 * Return: Always with 0 (Success).
 */

int main(void)
{
	unsigned long u_one = 0, u_two = 1, sum;
	int i;

	for (i = 0; i < 50; i++)
	{
		sum = u_one + u_two;
		printf("%lu", sum);
		u_one = u_two;
		u_two = sum;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
