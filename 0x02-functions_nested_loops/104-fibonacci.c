#include <stdio.h>

/**
 * main - check the code.
 * prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 * Return: Always with 0 (Success).
 */

int main(void)
{
	unsigned long first = 0, second = 1, next;
	int i;

	for (i = 0; i < 98; i++)
	{
		next = first + second;
		printf("%lu", next);
		first = second;
		second = next;
		if (i == 97)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
