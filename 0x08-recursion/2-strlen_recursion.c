#include "main.h"

/**
 * _strlen_recursion - a func that returns the length of a string
 *
 * @s: It is represent a pointer to the string.
 *
 * Description:
 * This function uses recursion to move one character forward at a time
 * through the string until it reaches the null terminator '\0',
 * which marks the end of the string.
 *
 * Each recursive call processes one character and adds 1 to the result
 * The base case occurs when *s == '\0', at which point the recursion
 * stops and returns 0.
 * Return: The length of the string as an integer.
 */
int _strlen_recursion(char *s)
{
	/* Base case: if the string is empty, return 0 */
	if (*s == '\0')
	{
		return (0);
	}
	/* Next step Recursive : 1 + length of the string */
	return (1 + _strlen_recursion(s + 1));
}
