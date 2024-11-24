#include "main.h"
/**
 * _strchr - that a func locates a character in a str.
 * @s: its a pointer given by main
 * @c: the character to look for
 *
 * Description: returns the first occurance of the char c in str.
 * Return: returns the first occurance, or return null if not found char.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

