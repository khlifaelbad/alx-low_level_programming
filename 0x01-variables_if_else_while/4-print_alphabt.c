#include <stdio.h>

/**
 * main -   prints the alphabet in lowercase
 *
 * Return: Always 0.
*/
int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);

}
