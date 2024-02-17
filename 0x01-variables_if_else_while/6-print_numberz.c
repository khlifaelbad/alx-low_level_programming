/*
 * File: 6-print_numberz.c
 * Auth: Khlifa elbad
 */
#include <stdio.h>
/**
 * main -   Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0.
*/

int main(void)
{
	int number;

	for (number = 0 ; number < 10 ; number++)
		putchar((number % 10) + '0');

	putchar('\n');

	return (0);
}
